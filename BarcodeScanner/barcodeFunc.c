#include "barcodeFunc.h"

static int reverse(t_barcode *barcode);
static int isEdge(t_barcode *barcode,int pos);

/* checks if code is reversed and if yes, reverses it into correct order,
    returns Barcode_too_short error, if it less than 5 symbols, 
    otherwise returns success */
int reverseCheck(t_barcode *barcode){
    if(barcode->size<5){
        return Barcode_too_short;
    }
    int i=0;
    for(;i<barcode->size-4;i++){
        if(isEdge(barcode,i)){
            break;
        }else if(barcode->barcode[i]==0 
        && barcode->barcode[i+1]==1 
        && barcode->barcode[i+2]==1 
        && barcode->barcode[i+3]==0 
        && barcode->barcode[i+4]==0){
            tryFunc(&reverse,barcode,"reverse");
            break;
        }
    }
    return Success;
}

/* reverses barcode symbols,
    returns Success */
static int reverse(t_barcode *barcode){
    int i=0,j=barcode->size-1;
    for(;i<barcode->size/2;i++,j--){
        char temp=barcode->barcode[i];
        barcode->barcode[i]=barcode->barcode[j];
        barcode->barcode[j]=temp;
    }
    return Success;
}

/* cuts the start/stop sequences from both sides,
    returns Barcode_no_edge_sequence, if not scanned correctly,
    otherwise returns success */
int cutEdges(t_barcode *barcode){
    int i=0;
    char breakFlag=1;
    for(;i<barcode->size-4;i++){
        if(isEdge(barcode,i)){
            breakFlag=0;
            break;
        }
    }
    if(breakFlag){
        printf("\nBarcode truncated. Move scanner\n");
        return Barcode_no_edge_sequence;
    }
    breakFlag=1;
    i+=5;
    int j=barcode->size-5;
    for(;j>i;j--){
        if(isEdge(barcode,j)){
            breakFlag=0;
            break;
        }
    }
    if(breakFlag){
        printf("\nBarcode truncated. Move scanner\n");
        return Barcode_no_edge_sequence;
    }
    int z=0;
    barcode->size=j-i;
    for(;i<=j;i++,z++){
        barcode->barcode[z]=barcode->barcode[i];
    }
    barcode->barcode = realloc(barcode->barcode,barcode->size);
    if(!barcode->barcode){
        return Memory_allocation_error;
    }
    
    return Success;
}

/* validates the C constant by formula,
    returns true if it matches or false if not */
int checkC(t_barcode *barcode){
    int i,sum=0;
    int n=barcode->size-2;
    for(i=1;i<=n;i++){
        sum+=(((n-i)%10)+1)*barcode->barcode[i-1];
    }
    return sum%11==barcode->barcode[n]?1:0;
}

/* validates the K constant by formula,
    returns true if it matches or false if not */
int checkK(t_barcode *barcode){
    int i,sum=0;
    int n=barcode->size-2;
    for(i=1;i<=n+1;i++){
        sum+=(((n-i+1)%9)+1)*barcode->barcode[i-1];
    }
    return sum%11==barcode->barcode[n+1]?1:0;
}

/* checks if the start/stop sequence is correct,
    returns true if so, or false if not */
static int isEdge(t_barcode *barcode,int pos){
    return (barcode->barcode[pos]==0 
        && barcode->barcode[pos+1]==0 
        && barcode->barcode[pos+2]==1 
        && barcode->barcode[pos+3]==1 
        && barcode->barcode[pos+4]==0);
}
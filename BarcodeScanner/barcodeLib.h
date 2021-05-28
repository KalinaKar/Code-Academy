#ifndef BARCODELIB_H_
#define BARCODELIB_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char *barcode;
    int size;
}t_barcode;

typedef enum Status{
    Success,
    Failure,
    Memory_allocation_error,
    File_error,
    Barcode_too_short,
    Barcode_no_edge_sequence,
    Wrong_C,
    Wrong_K,
    Unknown_symbol
}t_Status;

/* reads the number of light sensors and the light intensity from each sensor,
    stores the barcode lines in an array as 0s and 1s,
    returns memory allocation error, if such occurs, otherwise returns success */
int scanSequence(t_barcode *barcode);

/* reads the barcode and stores the dark lines in an array of 0s (for thin line) and 1s (for thick line), 
    calls functions to check if it is reversed and to cut the start/stop sequence from the edges, 
    returns memory allocation error, if such occurs, otherwise returns success */
int readSequence(t_barcode *barcode);

/* validaes code length and sequence order,
    returns Barcode_too_short error, if it less than 5 symbols,
    memory allocation error, if such occurs, otherwise returns success */
int validateCode(t_barcode *barcode);

/* checks the length of the decimal barcode, translates the 0s and 1s into decimal numbers,
    returns Barcode_too_short error if it is less then 3 decimal numbers, 
    memory allocation error, if such occurs, otherwise returns success */
int checkCode(t_barcode *barcode);


#endif /* BARCODELIB_H_ */
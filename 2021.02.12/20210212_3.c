/* Напишете функции, с помощта на които да реализирате динамичен
масив от елементи, чиято големина може да се променя по време на
изпълнение на програмата */
#include <stdio.h>
#include <stdlib.h>
void dynMemo();

int main()
{
    dynMemo();
    return 0;
}

void dynMemo()
{   
    /* get memory for n integers*/
    int n = 0;
    printf("How many elements would you like to start with?\n");
    scanf("%d", &n);    
    int *ip = NULL;
    ip = malloc(n * sizeof(int));
    int *ipCopy = ip; /* a pointer copy to interate through the elements with */
    if (NULL == ip)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }

    /* gets each integer, prints its adress and doubles n if you want to continue with more input*/
    int i;
    for (i = 0; i < n+1; i++)
    {
        if (i == n)
        {
            char ans;
            printf("Would you like to continue? y/n\n");
            ans = getchar();
            if (ans == '\n')
                ans = getchar();

            if(ans == 'y' || ans == 'Y'){
                printf("Enter %d more elements.\n", n);
                n *= 2;
                ip = realloc(ip, n * sizeof(int));
                if (NULL == ip){
                    printf("Reallocation memory error!\n");
                    exit(2);
                }
            } else {
                break;
            }
        }
        printf("\nEnter element %d: ", i);
        scanf("%d", ipCopy);
        printf("Address of %d element is: %i \n", i, ipCopy);
        ipCopy++;
    }
    /* prints the size of the input, then frees used memory */
    printf("Size of your input: %i bytes\n", (ipCopy - ip)*sizeof(int));
    free(ip);
}
/* Дефинирайте структура, в която има член указател към самата
структура. Използвайте тази структура, за да дефинирате две променливи,
които се указват една друга */
#include <stdio.h> 
  
struct node { 
    int data1; 
    char data2; 
    struct node* link; 
}; 
  
int main() { 
    struct node ob1; /* Node1 */ 
  
    /*Initialization */
    ob1.link = NULL; 
    ob1.data1 = 10; 
    ob1.data2 = 20; 
  
    struct node ob2; /* Node2 */ 
  
    /* Initialization */
    ob2.link = NULL; 
    ob2.data1 = 30; 
    ob2.data2 = 40; 
  
    /* Linking ob1 and ob2 */
    ob1.link = &ob2; 
  
    /* Accessing data members of  ob2 using ob1 */
    printf("%d\n", ob1.link->data1); 
    printf("%d\n", ob1.link->data2); 

    /* Linking ob2 and ob1 */
    ob2.link = &ob1; 
  
    /* Accessing data members of  ob2 using ob1 */
    printf("%d\n", ob2.link->data1); 
    printf("%d\n", ob2.link->data2); 
    return 0; 
}
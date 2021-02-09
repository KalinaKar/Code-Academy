/*  Даден е едномерен масив с N елемента (вие изберете
стойност на N), напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double. */
#include <stdio.h>
double average();

int main(void){
    printf("The average sum of the elements in the array is %lf\n", average());
    return 0;
}

double average(){
    int n, i;
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    double myArray[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%lf", &myArray[i]);
    double sum = 0;
    for(i = 0; i < n; i++){
        sum += myArray[i];
    }
    return sum / n;
}
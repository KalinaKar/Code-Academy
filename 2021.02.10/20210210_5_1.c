/* Пренапишете функцията за сумиране елементите на масив
използвайки пойнтер аритметика вместо инкрементиращa променливa i:
int sum_array(const int a[], int n){
int i, sum = 0;
for(i = 0; i < n; i++){
sum += a[ i ];
return sum;
} */
#include <stdio.h>
int sum_array(int *a, int n);

int main()
{
    int arr[4] = {2, 4, 6, 8};
    printf("%d\n", sum_array(arr, 4));
    return 0;
}

int sum_array(int *a, int n)
{
    int sum = 0;
    int *ip = a + n;
    while (a < ip)
    {
        sum += *a;
        a++;
    }
        return sum;
}
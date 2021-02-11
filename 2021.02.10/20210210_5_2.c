/* Пренапишете алгоритъма за сортиране без да използвате
инкрементиращи променливи.
void sort ( int a[], int n){
int i, j, temp;
for ( i = 0; i < n - 1; ++i )
for ( j = i + 1; j < n; ++j )
if ( a[i] > a[j] ) {
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
} */
#include <stdio.h>
void sort(int *a, int n);

int main()
{
    return 0;
}

void sort(int *a, int n)
{
    int *ip = a + n;
    while (a < ip)
    {
        int *temp = a + 1;
        while (temp <= ip)
        {
            if (*temp > *a)
            {
                *a = *temp + *a;
                *temp = *a - *temp;
                *a = *a - *temp;
            }
            temp++;
        }
        a++;
    }
}
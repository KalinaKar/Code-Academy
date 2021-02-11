/* Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи */
#include <stdio.h>
int linear_search(int *a, int n, int key);

int main(void)
{

    int arr[] = {2, 4, 6, 8, 10};

    printf("%i\n", linear_search(arr, 5, 10));

    return 0;
}

int linear_search(int *a, int n, int key)
{
    int *p = a + n;
    while (a <= p)
    {
        if (*a == key)
        {
            return a - (p - n);
        }
        a++;
    }
    return 0;
}
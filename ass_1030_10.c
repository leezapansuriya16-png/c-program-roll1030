//computer the sum of elements in a 1D array
#include <stdio.h>

int main() 
{
    int n, i, sum = 0;
    int a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];  // add each element to sum
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}


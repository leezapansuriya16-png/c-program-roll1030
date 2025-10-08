//multiply two matrices//
#include <stdio.h>
int main() 
{
    int a[10], b[10], c[10];
    int r1, c1, r2, c2;
    int i, j, k;
    printf("Enter first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) 
    {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1 * c1; i++)
        scanf("%d", &a[i]);
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2 * c2; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < r1 * c2; i++)
        c[i] = 0;
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            for (k = 0; k < c1; k++) 
            {
                c[i * c2 + j] += a[i * c1 + k] * b[k * c2 + j];
            }
        }
    }
    printf("Resultant Matrix:\n");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            printf("%d ", c[i * c2 + j]);
        }
        printf("\n");
    }
    return 0;
}

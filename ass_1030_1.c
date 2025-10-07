//convert kilometers to miles
#include<stdio.h>
int main()
{
  float kilometers;
  float miles;
    printf("enter distance in kilometers:");
    scanf("%f",&kilometers);
    miles= kilometers/0.609344;
    printf("%.2f kilometers is equal to %.2f miles.\n",kilometers,miles);
    return 0;
}

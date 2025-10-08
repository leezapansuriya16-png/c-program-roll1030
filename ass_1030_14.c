//print the first N natural number in reverse 
#include<stdio.h>
int main()
{
int N,i;
printf("enter the number of N:");
scanf("%d",&N);
printf("the first %d natural number is reverse are:\n",N);
for(i=N;i>=1;i--)
{
printf("%d",i);
}
return 0;
}

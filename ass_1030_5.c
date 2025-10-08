//Check whether a number is palindrome
#include<stdio.h>
int main()
{
    int n,rev=0,t,rem;
    printf("enter a number:");
    scanf("%d",&n);
    t=n;
    while (n!=0)
    {
      rem = n%10;
      rev = rev*10+rem;
      n=n/10;
    }
    if(rev==t)
    {
      printf("It is palindrome");
    }
    else
    {
      printf("It is not palindrome");
    }
  return 0;
}

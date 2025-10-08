//Count vowels in a string
#include<stdio.h>
#include<string.h>
int main()
{
      char str[100];
      int vom=0,i;
      printf("Enter a string :");
      scanf("%s",&str[i]);
      for(i=0;str[i];i++)
      {
        if(str[i]=='a'||
          str[i]=='e'|| 
          str[i]=='i'||
          str[i]=='o'||
          str[i]=='u'||
          str[i]=='A'||
          str[i]=='E'||
          str[i]=='I'||
          str[i]=='O'||
          str[i]=='U')
          {
            vom++;
          }
          
     }
     printf("number of vowels %d",vom);
     
     
   return 0;
}

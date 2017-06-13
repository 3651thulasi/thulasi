#include<stdio.h>
int main()
{
  int n;
  printf("enter the value");
  scanf("%d",&n);
  if(n<0)
  {
    printf("the number is negative");
    
  }
  else if(n>0)
  {
    printf("the number is positive");
    
  }
  else if(n==0)
  {
    printf("the number is --ZERO--");
    
  }
  return 0;
}

 
#include <stdio.h>
int main()
{
  int n;
  printf("Enter a number to check");
  scanf("%d",&n);
  if(n%7==0)
  {
   printf("The %d is divisible by 7",n);
  }
  else{
     printf("%d is not divisible by 7",n);
  }
}

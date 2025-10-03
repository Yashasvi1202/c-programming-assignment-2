#include <stdio.h>
#include <string.h>
void main()
{
 char a[100],b[100];
 printf("Enter a name");
 scanf("%s",&a);
 strcpy(b,a);
 printf("The copied string is: %s",b);
}

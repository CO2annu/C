#include <stdio.h>
#include <stdlib.h>
int main()
{ char a[20];
  int b;
  int c;
  int D;
printf("first no.\n");
scanf("%s",a);
b=atoi(a);
printf("second no.\n");
scanf("%s",a);
c=atoi(a);
D=b+c;
printf("%d",D);
return(0);
}
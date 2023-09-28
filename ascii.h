#include<stdio.h>
int main()
{
char key[20];
printf("press a key on your keyboard:");
scanf("%s",key);
printf("you pressed the %c key.\n",key);
printf("its ASCII value is %d.\n",key);
return(0);
}
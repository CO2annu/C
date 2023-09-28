#include<stdio.h>
int main()
{
char key;
printf("press a key on your keyboard:");
key=getchar();
printf("you pressed the %c key.\n",key);
printf("its ASCII value is %d.\n",key);
return(0);
}
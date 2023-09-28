#include<stdio.h>
#define COUNT 2000000000000000
void dropbomb(void);
void delay(void);
int main()
{
	char x;
	printf("please enter to drop the bomb");
	x=getchar();
	dropbomb();
	printf("key code %d used to drop the bomb.\n",x);
	return(0);
}
void dropbomb()
{
	int x;
	for(x=20;x>1;x--)
		puts("      *");
	puts("\tBoom!");
}
void delay()
{
	long int x;
	for(x=0;x<COUNT;x++)
		;
}
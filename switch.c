#include<stdio.h>
int main()
{
	char c;
	printf("please make your treat selection:\n");
	printf("1-beverage.\n");
	printf("2-candy.\n");
	printf("3-hotdog.\n");
	printf("4-popcorn.\n");
	printf("your choice:");
	c=getchar();
	switch(c)
	{
		case '1':
		printf("beverage\n that will be $8.00\n");
		
		case'2':
		printf("candy\nthat will be $5.50\n");
		break;
		default:
		printf("that is not a proper selection.\n");
		
	}
	return(0);
}
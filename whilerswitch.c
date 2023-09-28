#include<stdio.h>
int main()
{
	char c;
	int done;
	float total=0;
	printf("please make your treat selection.\n");
	printf("1-beverage.\n");
	printf("2- candy.\n");
	printf("3- hotdog.\n");
	printf("4- popcorn.\n");
	printf("=- Done.\n");
	printf("your choices:\n");
	// figure out what they typed in 
	done=0;
	while(!done)
	{
		c=getchar();
		switch(c)
		{
			case '1':
			printf("beverage\t$8.00\n");
			total+=8;
			break;
			case '2':
			printf("candy\t\t$5.50\n");
			total+=5.50;
			break;
			case '3':
			printf("hot dog\t\t$10.00\n");
			total+=10;
			break;
			case '4':
			printf("popcorn\t\t$7.50\n");
			total+=7.5;
			break;
			case '=':
			printf("total of $%.2f\n",total);
			printf("please pay the cashier.\n");
			done=1;
			break;
			default:
			printf("improper selection.\n");
		}//end of switch
	}// end of while
	return(0);
}

#include<stdio.h>
void dropbomb(void);
int death;
int main()
{
	char x;
	death=0;
	for(;;)
	{
		printf("press ~ then enter to quit\n");
		printf("press enter to drop the bomb");
		x=getchar();
		fflush(stdin);
		if(x=='~')
		{
			break;
		}
		dropbomb();
		printf("%d people killed!\n",death);
	}
	return(0);
}
void dropbomb()
{
	int x;
	for(x=20;x>1;x--)
	{
		puts("\t*");
	}
	puts("\t BOOM!");
	death+=1500;
	

}
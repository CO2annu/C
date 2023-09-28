#include<stdio.h>
int main()
{
	int start;
	long delay;
	do
	{
		printf("please enter the number to start\n");
		printf("the countdown(1 to 100):");
		scanf("%d",&start);
	}
	while(start<1 || start>100);
		do
		{
			printf("t-minus %d\n",start);
			start--;
			for(delay=0;delay<100000;delay++);
		}
		while(start>0);
		printf("Zero!\nblast off!\n");
		return(0);
}



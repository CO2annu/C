#include<stdio.h>
#include<stdlib.h>
int main()
{
	char weight[4];
	int w;
	printf("enter your weight here.\n");
	gets(weight);
	w=atoi(weight);
	printf("here is your weight now %i",w);
	w++;
	printf("here is your weight after eating potatoes %i",w);
	
	return(0);
	
	
}
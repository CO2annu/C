#include<stdio.h>
int main()
{
	int a;
	char b;
	printf("here is thy grid...\n");
	for(a=1;a<10;a++)
	{
		for(b='A';b<'k';b++)
		{
			printf("%d-%c",a,b);
		}
		putchar('\n');
	}
	return(0);
}
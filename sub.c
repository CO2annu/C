#include<stdio.h>
#include<stdlib.h>
int main()
{
int differ;
int me;
int father;
char years[20];
printf("how old are you?");
gets(years);
me=atoi(years);
printf("how old is your father?");
gets(years);
father=atoi(years);
differ=father-me;
printf("you are %d years younger than your father",differ);
return(0);

}
#include<stdio.h>
int main()
{
	int i=0;
	printf("\n---------------------ANSII Table------------------\n");
	printf("\n--------------------------------------------------\n");
	printf("\nANSII Number  Character\n");
	printf("\n--------------------------------------------------\n");

	for(i=0;i<65534;i++)
	{
		printf("%d\t\t%c\n",i,i);
	}
	return 0;
}
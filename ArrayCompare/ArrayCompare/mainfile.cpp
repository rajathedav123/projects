#include"header.h"
int main()
{
	int len1=0,len2=0, icnt=0;
	BOOL bret=TRUE;
	int *brr=NULL;
	int *brr1=NULL;

	printf("Enter the element");
	scanf("%d",&len1);
	
	printf("Enter the element");
	scanf("%d",&len2);

	brr=(int*)calloc(len1,sizeof(int));
	brr1=(int*)calloc(len2,sizeof(int));

	printf("Enter the values\n");
	for(icnt=0;icnt<len1;icnt++)
	{
		printf("enter element  no is:%d\t",icnt+1);
		scanf("%d",&brr[icnt]);
	}
	printf("Enter the values\n");
	for(icnt=0;icnt<len2;icnt++)
	{
		printf("enter element  no is:%d\t",icnt+1);
		scanf("%d",&brr1[icnt]);
	}
	
	bret=ArrayCompare(brr,len1,brr1,len2);

	if(bret==TRUE)
	{
		printf("\n");
		printf("Array is equal");
	}
	else
		{
			printf("\n");
			printf("Array is not equal");
	    }
	free(brr);
	free(brr1);

	return 0;
}
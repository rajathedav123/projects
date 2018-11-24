#include"myheader.h"
int main()
{
	int i=0,ilen=0,cret=0;
	char *crr=NULL;

	printf("Enter the element");
	scanf("%d",&ilen);

	crr=(char*)calloc(ilen,sizeof(char));

	printf("Enter the values\n");
	for(i=0;i<ilen;i++)
	{
		//printf("Enter char is :%d\t",i+1);
		scanf("%c",&crr[i]);
	}

	cret=ArrayCapital(crr,ilen);

	printf("%d\t",cret);

	free(crr);
	return 0;
}

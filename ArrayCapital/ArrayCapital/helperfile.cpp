#include"myheader.h"
int ArrayCapital(char arr[],int isize)
{
	int i=0,icnt=0;
	for(i=0;i<isize;i++)
	{
		if(arr[i]>='A' && arr[i]<='Z')
		{
			icnt++;
		}
	}
	return icnt;
}
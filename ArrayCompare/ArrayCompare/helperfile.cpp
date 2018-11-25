#include"header.h"

BOOL ArrayCompare(int arr1[],int isize1,int arr2[],int isize2)
{
	int i=0;

	if(isize1!=isize2)
	{
		return FALSE;
	}

	for(i=0;i<isize1;i++)
	{
		if(arr1[i]!=arr2[i])
		{
			break;
		}
	}

	if(i<isize1)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}


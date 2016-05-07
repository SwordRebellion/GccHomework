#include "include/multy.h"

void multy(int a[100][100],int b[100][100],int c[100][100],int n,int m,int w)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<w;j++)
		{
			for(k=0;k<m;k++)
				c[i][j]+=a[i][k]*b[k][j];
		}
	}

}
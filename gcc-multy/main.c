#include <stdio.h>
#include <time.h>

#include "include/multy.h"


int main(void) {

	int i,j;
	int a[100][100],b[100][100],c[100][100]={0},n,m,w;
        double time_start,time_end;
	printf("输入第一个矩阵的行数，列数，并输入各元素：\n");
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	printf("输入第二个矩阵的行数，列数，并输入各元素：\n");
	scanf("%d%d",&m,&w);
	for(i=0;i<m;i++)
		for(j=0;j<w;j++)
			scanf("%d",&b[i][j]);
        time_start = clock();
	multy(a,b,c,n,m,w);
        time_end = clock();

	for(i=0;i<n;i++)
	{
		for(j=0;j<w;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
        printf("Time used: %10.9f\n", (double) ( (time_end -time_start) / 1000.0) );
	return 0;
}




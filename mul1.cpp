#include<stdio.h>
int main()
{
	int i,n,m,table=0;
	printf("enter a number which you want multiplication table:");
	scanf("%d",&n);
	printf("enter a limit:");
	scanf("%d",&m);
	printf("the multiplication table of %d: \n",n);
	for(i=1;i<=m;i++)
	{
		table=i*n;
		printf("%dx%d=%d ",i,n,table);
		printf("\n");
	}

}

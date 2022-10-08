#include<stdio.h>
int main()
{
	int a[10],i,n;
	printf("enter number  a elements:");
	scanf("%d",&n);
	printf("enter a elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	if(a[i]%2==0 )
	printf(" even :%d",a[i]);
	else
	{
		
		printf(" odd:%d",a[i]);
	
	}
	
}

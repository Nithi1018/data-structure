#include<stdio.h>
#include<string.h>
int main()
{
	char a[25][25],n,i,j,temp[25];
	printf("enter a number of entries:");
	scanf("%d",&n);
	printf("enter a string one by one:");
	for(i<0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	for(i<0;i<=n;i++)
	
		for(j=i+1;j<=n;j++)
		if(strcmp(str[i],str[j])>0)
		{
			strcpy(s,str[i]);
			strcpy(str[i],str[j]);
			strcpy(str[j],s);
			
			
		}
		
	}
	printf("the sorted list is:");
	for(i=0;i<=n;i++)
	printf("%s \n",&str[i]);
	

}

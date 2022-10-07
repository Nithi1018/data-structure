#include<stdio.h>
#include<string.h>
int main()
{
	int i,left,right,len;
	char str[100],temp;
	printf("enter a string to reverse:");
	scanf("%s",&str[100]);
	len=strlen(str);
	left=0;
	right=len-1;
	for(i=left;i<right;i++)
	{
		temp=str[i];
		str[i]=str[right];
		str[right]=temp;
		
	}
	printf(" %s the reversed string is:",&str);
}

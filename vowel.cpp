//write a program to read sentence print vowels and consonants / counts
#include<stdio.h>
#include<string.h> 
#define size  as 99
int main()
{
	char a[];
	int i,vow=0,con=0,len=0;
	printf("enter a sentence :");
	scanf("%s",&a);
	for(i=0;i<strlen(a);i++)
	{
	
	if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' )
	{
		
		printf("%s \n",a[i]);
		vow++;
		printf("vowel= %d",vow);
	}
	else
	{
	printf("consonants are: %s",a[i]);
	con++;
	printf("consonants=%d",vow);
	}
	return 0;
}
}


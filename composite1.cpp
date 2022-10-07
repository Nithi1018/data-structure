#include<stdio.h>
int main()
{
	int i;
	printf("the composite number btw 10 to 1000:");
	for(i=9;i<1000;i++)
	{
		if(i%2==0 || i%3==0 || i%5==0 || i%7==0)
		{
			printf("%d \t",i);
		}
	}
}

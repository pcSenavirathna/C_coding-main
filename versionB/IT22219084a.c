#include<stdio.h>

int main()
{
	char ch='a';
	int i,j;
	
	for(i=97;i<102;i++)
	{
		for(j=97;j<=i;j++)
		{
			printf("%c",i);
		}
		puts("");
	}
	return 0;
}

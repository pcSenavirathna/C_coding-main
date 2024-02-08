#include <stdio.h>

int main()
{
	int i,j,k;
	
	for(i=2;i>0;i--)
	{
		for(j=2;j>0;j--)
		{
			for(k=2;k>0;k--)
			{
				printf("[%d%d%d]",i,j,k);
				puts("");
			}
		}
	}
	return 0;
}

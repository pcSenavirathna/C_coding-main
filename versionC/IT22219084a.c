#include<stdio.h>

int main (void)
{
	int i,j,k;
	
	for(i=1;i<3;i++)
	{
		for(j=1;j<3;j++)
		{
			for(k=1;k<3;k++)
			{
				printf("[%d%d%d]",i,j,k);
				puts("");
			}
			
		}
		
	}
	return 0;
}

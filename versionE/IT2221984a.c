#include <stdio.h>

int main(void)
{
	int num,min=100,max=0;
	
	while(num!=-99)
	{
		printf("input a series of marks : ");
		scanf("%d",&num);
		
		if(num<100&&num>0)
		{
			if(num<min)
			{
				min=num;
			}
			if(num>max)
			{
				max=num;
			}
		}
		else if(num==-99)
		{
			break;
		}
		else
		{
			printf("invalid input, reenter the marks\n");
		}
	}
	puts("");
	if(max<100&&min>0)
	{
		printf("max number is : %d\n",max);
		printf("min number is : %d\n",min);		
	}
	return 0;
}

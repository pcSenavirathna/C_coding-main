#include <stdio.h>

int main()
{
	int array[3][3];
	int i,j;
	float avg;
	
	for(i=0;i<3;i++)
	{
		printf("student no : %d\n",i+1);
		for(j=0;j<3;j++)
		{
			printf("Score %d : ",j+1);
			scanf("%d",&array[i][j]);
		}
		puts("");
	}
	puts("");
	
	printf("Student No\tExam Scores\t\tAverage\n");
	for(i=0;i<3;i++)
	{
		avg=0;
		printf("%d\t\t",i+1);
		for(j=0;j<3;j++)
		{
			printf("%d  ",array[i][j]);
			avg+=array[i][j];
		}
		printf("\t\t%.2f",avg/j);
		puts("");
		
	}
	return 0;
}

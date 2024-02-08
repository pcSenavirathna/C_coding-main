#include<stdio.h>

float findRadianValue(float angleInDegrees);
void printRadianValues(void);

int main()
{
	
	printf("Angle(degrees)	Angle(radians)\n");	
	printRadianValues();
	
	
	return 0;
}
float findRadianValue(float angleInDegrees)
{
	float pi=22.0/7;
	float radian;
	int count;
	for(count=0;count<6;count++)
	{
			radian = pi/180*angleInDegrees;
			//return radian;
	}
}
void printRadianValues(void)
{
	int angleInDegrees;
	float sum;
	for(angleInDegrees=100;angleInDegrees<=200;angleInDegrees=angleInDegrees+20)
	{
		sum=findRadianValue(angleInDegrees);
		printf("%d		%.2f\n",angleInDegrees,sum);
	}	
}



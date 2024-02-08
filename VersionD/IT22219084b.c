#include <stdio.h>

float calculateTotalCost(int itemNo, int quantity);
void printDetails(int itemno, int quantity, float totalCost);

int main()
{
	int itemnum,qu;
	
	printf("Enter the item number : ");
	scanf("%d" ,&itemnum);
	printf("Enter the number of quantity : ");
	scanf("%d",&qu);
	
;
	printDetails(itemnum,qu,calculateTotalCost(itemnum,qu));
	
	return 0;
}
float calculateTotalCost(int itemNo, int quantity)
{
	float cal;
	
	if(itemNo==1)
	{
		cal=quantity*100.00;	
	}	
	else if(itemNo==2)
	{
		cal=quantity*200.00;	
	}
	else if(itemNo==3)
	{
		cal=quantity*300.00;	
	}
	
	return cal;
}
void printDetails(int itemno, int quantity, float totalCost)
{
	puts("");
	printf("Item number is : %d\n",itemno);
	printf("Number of quantity : %d\n",quantity);
	printf("Total cost is : %.2f",calculateTotalCost(itemno,quantity));
	
}


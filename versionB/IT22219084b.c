#include<stdio.h>

float getDiscountPrice(int noOfGuests, float chargePerGuest);
float getAmount(int noOfGuests, float chargePerGuest, float discount);

int main()
{
	int guests;
	float charge,offer,fullAmount;
	
	printf("Enter no of guests: ");
	scanf("%d",&guests);
	
	printf("Enter charge per guest: ");
	scanf("%f",&charge);
	
	offer=getDiscountPrice(guests,charge);
	fullAmount=getAmount(guests,charge,offer);
	
	printf("Discount: %.2f\n",offer);
	printf("Amount to be paid: %.2f",fullAmount);
	
	return 0;
}

float getDiscountPrice(int noOfGuests, float chargePerGuest)
{
	float dis;
	
	if(noOfGuests>200)
	{
		dis=(noOfGuests*chargePerGuest)*0.1;
	}
	else
	{
		dis=0.00;
	}
	return dis;
}

float getAmount(int noOfGuests, float chargePerGuest, float discount)
{
	float Amount;
	
	Amount =(noOfGuests*chargePerGuest)-discount;
	
	return Amount;
}

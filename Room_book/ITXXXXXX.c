#include<stdio.h>

int main()
{
	int tp_room,days; //tp_room=type of room
	float F,H,cal,total,dis;
	char name,cType;// cType= Card Type
	
	lable1:
	while(tp_room!=-1)
	{
		printf("enter type of room : ");
		scanf("%d",&tp_room);
	
	
		switch(tp_room)
		{
			case 1:
				printf("Enter Accommodation Basis (F/H) : ");
				scanf(" %c",&name);
				
				if(name=='F')
				{
					F=25555.00;
				}
				if(name=='H')
				{
					H=17250.00;		
				}break;
			case 2:
				printf("Enter Accommodation Basis (F/H) : ");
				scanf(" %c",&name);
				
				if(name=='F')
				{
					F=17500.00;
				}
				if(name=='H')
				{
					H=12250.00;
				}break;
			case 3:
				printf("Enter Accommodation Basis (F/H) : ");
				scanf(" %c",&name);
				
				if(name=='F')
				{
					F=9000.00;
				}
				if(name=='H')
				{
					H=7250.00;	
				}break;
			case -1:
				break;	
			default:
				printf("Invalid Type of room\n");
				goto lable1;
		 }
		if(tp_room!=-1)
		{
			printf("Enter No of days : ");
			scanf(" %d",&days);
			printf("Enter Reward Card Type ( G, S, B ) : ");
			scanf(" %c",&cType);	
		}
		
		
		switch(cType)
		{
			case 'G':
				dis=0.125;
				break;
			case 'S':
				dis=0.115;
				break;
			case 'B':
				dis=0.095;
				break;
		}
		if(name=='F')
		{
			cal=F-(F*dis);
			total=cal*days;
		}	
		if(name=='H')
		{
			cal=H-(H*dis);
			total=cal*days;
		}
		if(tp_room!=-1)
		{
			printf("Amount(Rs.) :  %.2f\n\n",total);
		}
		
	}
	return 0;
}

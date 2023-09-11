//hotel menu 
#include<stdio.h>
#include<conio.h>
int main()
{
	int q,a,s;//quantity
	suresh:
	printf("****MENU CARD****");
	printf("\n\t\t1.COFFEE             RS.20");
	printf("\n\t\t2.TEA                RS.15");
	printf("\n\t\t3.ICE CREAM          RS.30");
	printf("\n\t\t4.CHICKEN RICE       RS.150");
	printf("\n\t\t5.CHILLI PAROTTA     RS.25");
	printf("\nEnter your choice:");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("\n you have selected coffee");
			printf("\nEnter the quantity:");
			scanf("%d",&q);
			printf("\nyour amount is %d",(q*20));
			break;
			
		case 2:
			printf("\n you have selected TEA");
			printf("\nEnter the quantity:");
			scanf("%d",&q);
			printf("\nyour amount is %d",(q*15));
			break;	
			
		case 3:
			printf("\n you have selected ICE CREAM");
			printf("\nEnter the quantity:");
			scanf("%d",&q);
			printf("\nyour amount is %d",(q*30));
			break;	
		case 4:			
			printf("\n you have selected CHICKEN RICE");
			printf("\nEnter the quantity:");
			scanf("%d",&q);
			printf("\nyour amount is %d",(q*150));
			break;	
			
		case 5:
			printf("\n you have selected CHILLI PAROTTA");
			printf("\nEnter the quantity:");
			scanf("%d",&q);
			printf("\nyour amount is %d",(q*25));
			break;	
		default:
		    printf("\nTHIS FOOD ITEMS NOT IN THE SHOP");
			break;
    }
		
	printf("\n Do you have continue press:5\n");	
	scanf("%d",&s);
	if(s==5)
	{	
      goto suresh;	
    }
printf("\n*****Thank you*****");
getch();	
return 0;			
	
    
}

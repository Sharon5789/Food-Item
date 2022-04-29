#include<stdio.h>
main()
{
	printf("Enter item you want: \n1. Pizza\n2. Burger\n3. Pasta\n4. French Fries\n5. Sandwich");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("You have picked -Pizza \n Price is Rs 239");
			break;
		case 2:
				printf("You have picked -Burger \n Price is Rs 129");
			break;
		case 3:
				printf("You have picked -Pasta \n Price is Rs 179");
			break;
		case 4:
				printf("You have picked -French Fries \n Price is Rs 99");
			break;
		case 5:
				printf("You have picked -Sandwich \n Price is Rs 149");
			break;
		default : printf("Invalid Item");	
	}
    return 0;
}

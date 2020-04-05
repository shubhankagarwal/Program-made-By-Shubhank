#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	printf("Menu\n 1.Sandwich\n 2.Pasta\n 3.Idli Sambhar\n 4.Pizza\n 5.Burger\n");   /*Displying the menu*/
	
	printf("Enter Your Choice:");
	scanf("%d",&a);                              /*Taking input of the order*/
	
	switch(a)                                                          /*To print what is desired in the output using switch case*/
	{
		case 1:
			printf("Food Item- Sandwich\n  Price- Rs 149/-");
			break;
	    case 2:
	    	printf("Food Item- Pasta\n  Price- Rs 179/-");
	    	break;
	    case 3:
	    	printf("Food Item- Idli Sambhar\n  Price- Rs 199/-");
	    	break;
	    case 4:
	    printf("Food Item- Pizza\n  Price- Rs 240/-");
	        break;
	    case 5:
	    	printf("Food Item- Burger\n  Price- Rs 129/-");
	    	break;
	    default: 
	    printf("Use the default case.");
	}
	return 0;
}

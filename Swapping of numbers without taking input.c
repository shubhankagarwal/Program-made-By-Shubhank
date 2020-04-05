#include<stdio.h>  
#include<stdlib.h>
 int main()    
{
	   
int a=55, b=20;                   /*Declaration of variables*/
printf("Before swap a=%d, b=%d",a,b);          
             
a=a+b;    
                    
b=a-b;                       

a=a-b;   
/*To mathematically make the variables equal to the values to each other.*/
printf("\n After swap a=%d b=%d",a,b);    

return 0;  
}   

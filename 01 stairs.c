#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=0,b=0;   /*Initializing Variable*/
	
	for(a=1;a<=6;a++)      /*Outer loop for having 6 lines*/
  {    
   for(b=1;b<=a;b++)       /*Inner loop for printing 01*/
   {
   printf("01");
   }
    printf("\n");  
  }
  return 0;
}

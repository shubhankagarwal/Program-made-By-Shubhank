#include <stdio.h>
 
/*structure declaration*/
struct employee{
    char    name[100];
    int     empId;
    float   salary;
};
 
int main()
{
    /*declare structure variable*/
    struct employee emp;
    int i=0; 
    /*read employee details*/
    for(i=0;i<21;++i)
	{
	printf("\nEnter details :\n");
    printf("Name:");          gets(emp.name);
    printf("ID(only in numeric form)?:");            scanf("%d",&emp.empId);
    printf("Salary ?:");        scanf("%f",&emp.salary);
    
    /*print employee details*/
    printf("\nEntered detail is:\n");
    printf("Name: %s\n"   ,emp.name);
    printf("Id: %d\n"     ,emp.empId);
    printf("Salary: %f\n",emp.salary);
    continue;
	}
	 return 0;
}

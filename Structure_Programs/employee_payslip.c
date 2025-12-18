#include<stdio.h>
struct employees{
	char id_no[20];
	char name[50];
	char design[20];
	char dep[60];
	float basicsalary;
	float netsalary;
};
int main(){
	int n=0,i;
	printf("Enter number of employees:");
	scanf("%d",&n);
	getchar();
	struct employees emp[n];
	for(i=0;i<n;i++){
		printf("Enter employee %d details\n",i+1);
		printf("Enter Employee ID:");
		scanf("%s",emp[i].id_no);
		getchar();
		printf("Enter Employee Name:");
		gets(emp[i].name);
		printf("Enter Designation:");
		gets(emp[i].design);
		printf("Enter Department:");
		gets(emp[i].dep);
		printf("Enter Basic Salary:");
		scanf("%f",&emp[i].basicsalary);
		emp[i].netsalary = 2000 + (emp[i].basicsalary * 0.85);
	}
	for(i=0;i<n;i++){
		printf("Employee %d Payslip:\n",i+1);
		printf("Employee ID:%s\n",emp[i].id_no);
		printf("Name:%s\n",emp[i].name);
		printf("Designation:%s\n",emp[i].design);
		printf("Department:%s\n",emp[i].dep);
		printf("Gross salary is:%.2lf\n",emp[i].basicsalary);
		printf("Net salary after deduction of 15 percent  and adding 2000 allowence is:%.2lf\n",emp[i].netsalary);
		
	}
	return 0;
}

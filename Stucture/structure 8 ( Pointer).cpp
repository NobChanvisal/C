#include <stdio.h>
#include <conio.h>

typedef struct{
	char id[20];
	char name[20];
	char sex;
	int age;
	float salary;
}employee;
int main(){
	int i,n;
	employee emp[20];
	employee *p;
	printf("Enter n: ");fflush(stdin);scanf("%d",&n);
	//input:
	printf("-----------------------------------------------------\n");
	p = emp;
	for(i = 0; i<n; i++){
		printf("\nEnter id   : ");fflush(stdin);gets(p-> id);
		printf("Enter name : ");fflush(stdin);gets(p-> name);
		printf("Enter sex  : ");fflush(stdin);scanf("%c",&p-> sex);
		printf("Enter age  : ");scanf("%d",&p-> age);
		printf("Enter salary: ");scanf("%f",&p->salary);
		p++;
	}
	printf("------------------------------------------------------\n");
	//p = &emp[n-1];
	p = emp;
	printf("\nOutput Data\n");
	printf("------------------------------------------------------\n");
	for(i = 0; i<n; i++)
	//printf("%-8s %-15s %-8c %-8d %-8.2f\n",(p-i)->id,(p-i)->name,(p-i)->sex,(p-i)->age, (p-i)->salary);
	printf("%-8s %-15s %-8c %-8d %-8.2f\n",(p+i)->id,(p+i)->name,(p+i)->sex,(p+i)->age, (p+i)->salary);
}
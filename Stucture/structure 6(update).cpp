#include <stdio.h>
#include <string.h>
#include <conio.h>

struct employee{
	char id[20];
	char name[20];
	char sex;
	float salary;
};
struct employee emp[20];
float sa;

void input(int n){
	for(int i = 0; i<n; i++){
		printf("Input Id     : ");fflush(stdin);gets(emp[i].id);
		printf("Input Name   : ");fflush(stdin);gets(emp[i].name);
		printf("Input Gender : ");fflush(stdin);scanf("%c",&emp[i].sex);
		printf("Input Salary : ");scanf("%f",&sa);emp[i].salary = sa;
		printf("\n");
	}
	
}
void output(int n){
	for(int i = 0; i<n; i++){
		printf("%-8s %-15s %-8c %-8.2f\n",emp[i].id,emp[i].name,emp[i].sex,emp[i].salary);
	}
}
void update(int n){
	char u_id[20];
	char u_name[20],u_sex,ne;
	float u_salary;
	char ch;
	printf("-----------------------------------\n");
	printf("Chose one options you want update\n");
	printf("1.Id   2.Name   3.Sex   4.Salary\n");
	printf("-----------------------------------\n");
	ch = getch();
	switch(ch){
		case '1':
			printf("Input Id to update: ");fflush(stdin);gets(u_id);
			for(int i = 0; i<n; i++)
				if(strcmp(emp[i].id,u_id)==0){
					printf("\nInput new id : ");fflush(stdin);gets(emp[i].id);
				}	
				break;
		case '2':
			printf("Input name to update: ");fflush(stdin);gets(u_name);
			for(int i = 0; i<n; i++)
				if(strcmp(emp[i].name,u_name)==0){
					printf("\nInput new name : ");fflush(stdin);gets(emp[i].name);
				}	
				break;
		case '3':
			printf("Input sex to update : ");fflush(stdin);scanf("%c",&u_sex);
			for(int i = 0; i<n; i++)
				if(emp[i].sex == u_sex){
					printf("\nInput new sex : ");fflush(stdin);scanf("%c",&emp[i].sex);
				}	
				break;
		case '4':
			printf("Input salary to update: ");scanf("%f",&u_salary);
			for(int i = 0; i<n; i++)
				if(emp[i].salary == u_salary){
					printf("\nInput new salary : ");scanf("%f",&emp[i].salary);
				}	
				break;
}
	
}
int main(){
	int n;
	printf("Input n: ");fflush(stdin);scanf("%d",&n);
	printf("--------------------------------------------\n");
	
	input(n);
	printf("____________________________________________\n");
	printf("\nOutput before\n");
	printf("--------------------------------------------\n");
	
	output(n);
	update(n);
	printf("Output After\n");
	printf("____________________________________________\n");
	output(n);
}
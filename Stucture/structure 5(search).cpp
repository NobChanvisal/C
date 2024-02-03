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

void input(int n){
	float sa;
	for(int i = 0; i<n; i++){
		printf("\nId      : ");fflush(stdin);gets(emp[i].id);
		printf("Name    : ");fflush(stdin);gets(emp[i].name);
		printf("Gender  : ");fflush(stdin);scanf("%c",&emp[i].sex);
		printf("Salary  : ");scanf("%f",&sa);emp[i].salary = sa;
	}
}
void output(int n){
	for(int i = 0; i<n; i++){
		printf("%-10s %-10s %-8c %-10.2f\n",emp[i].id,emp[i].name,emp[i].sex,emp[i].salary);
	}
}
void search(int n){
	int i,k = 0;
	char s[20],s_id[20],s_gen;
	float s_sa;
	char ch,ch1;
	start:
	printf("-----------------------------------\n");
	printf("Chose one option to search\n");
	printf("1.Name  2.Id  3.Gender  4.Salary\n");
	printf("-----------------------------------\n");

	ch = getch();
	switch(ch){
		case'1':
			printf("Enter name to search : ");fflush(stdin);gets(s);
			for(i = 0; i<n; i++)
			if(strcmp(emp[i].name,s) == 0){
				k = k+1;
				printf("%-10s %-10s %-8c %-10.2f\n",emp[i].id,emp[i].name,emp[i].sex,emp[i].salary);
			}
			if(k == 0)
			printf("Search not found\n");
			break;
		case'2':
			printf("Input id to search: ");fflush(stdin);gets(s_id);
			for(i = 0; i<n; i++)
				if(strcmp(emp[i].id,s_id)== 0){
					k = k+1;
				printf("%-10s %-10s %-8c %-10.2f\n",emp[i].id,emp[i].name,emp[i].sex,emp[i].salary);
			}
			if(k == 0)
			printf("Search not found\n");
			break;
		case'3':
			printf("Enter gender to search: ");fflush(stdin);scanf("%c",&s_gen);
			for(i = 0; i<n; i++)
				if(emp[i].sex == s_gen){
					k = k+1;
					printf("%-10s %-10s %-8c %-10.2f\n",emp[i].id,emp[i].name,emp[i].sex,emp[i].salary);
				}
				if(k == 0)
				printf("Search not found\n");		
			break;
		case'4':
			printf("Enter salary to search: ");scanf("%f",&s_sa);
			for(i = 0; i<n; i++)
				if(emp[i].salary == s_sa){
				k = k+1;
				printf("%-10s %-10s %-8c %-10.2f\n",emp[i].id,emp[i].name,emp[i].sex,emp[i].salary);
				}
				if(k == 0)
				printf("Search not found\n");
			break;
	}
	ch1= getch();
	if(ch1==13)
	goto start;
}
int main(){
	int n;
	printf("Input n: ");fflush(stdin);scanf("%d",&n);
	printf("-------------------------------------\n");
	input(n);
	printf("_____________________________________\n");
	
	printf("\nBefore Search\n");	
	printf("-------------------------------------\n");
	output(n);
	printf("_____________________________________\n");
	
	printf("\nAfter Search\n");
	printf("-------------------------------------\n");
	search(n);
	printf("_____________________________________\n");	
}
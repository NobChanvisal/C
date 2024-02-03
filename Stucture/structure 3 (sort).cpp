#include <stdio.h>
#include <conio.h>
int main(){
	struct employee{
		char id[20];
		char name[20];
		char sex;
		float salary;
	}emp[10],temp;
	int i,n;
	float s;
	printf("Enter n: ");fflush(stdin);scanf("%d",&n);
	for(i = 0; i<n; i++){
		printf("Enter id     : ");fflush(stdin);gets(emp[i].id);
		printf("Enter name   : ");fflush(stdin);gets(emp[i].name);
		printf("Enter sex    : ");fflush(stdin);scanf("%c",&emp[i].sex);
		printf("Enter salary : ");scanf("%f",&s);emp[i].salary = s;
	}
	printf("Output before condition\n");
	for(i = 0; i<n; i++){
		printf("%-10s %-15s %-10c %-10.2f",emp[i].id,emp[i].name,emp[i].sex,emp[i].salary);
	}
	for(i = 0; i<n; i++){
		if(emp[i].salary >= 500 && emp[i].sex =='F')
		printf("%-10s %-15s %-10 %-10.2f",emp[i].id,emp[i].name,emp[i].sex,emp[i].salary);
	}
	if(emp[i].salary < 800 && emp[i].sex == 'F')
	printf("%-10s %-15s %-10 %-10.2f",emp[i].id,emp[i].name,emp[i].sex,emp[i].salary);
}
/*
int main(){
	struct employee{
		char id[20];
		char name[20];
		char sex;
		float salary;
	}emp[20],temp;
	int i,n;
	float s,max;
	printf("Enter n: ");fflush(stdin);scanf("%d",&n);
	for(i = 0; i<n; i++){
		printf("Enter id    : ");fflush(stdin);gets(emp[i].id);
		printf("Enter name  : ");fflush(stdin);gets(emp[i].name);
		printf("Enter sex   : ");fflush(stdin);scanf("%c",&emp[i].sex);
		printf("Enter salary: ");scanf("%f",&s);emp[i].salary = s;
		printf("\n");
	}
	printf("Output before sort\n");
	for(i = 0; i<n; i++){
		printf("%-10s %-20s %-5c %-10.2f\n",emp[i].id,emp[i].name,emp[i].sex,emp[i].salary);
	}
	max = emp[0].salary;
	for(i = 0; i<n; i++){
		if(emp[i].salary > max){
			max = emp[i].salary;
		}
	}
	printf("Maximum salary of data is :\n",max);
	for(i = 0; i<n; i++){
		if(emp[i].salary == max)
		printf("%-10s %-20s %-5c %-10.2f\n",emp[i].id,emp[i].name,emp[i].sex,emp[i].salary);
	}	
}
*/
/*
int main(){
	struct employee{
		char id[20];
		char name[20];
		char sex;
		float salary; 
	}emp[20],temp;
	float s;
	int i,j,n;
	printf("Input n: ");fflush(stdin);scanf("%d",&n);
	for(i = 0; i<n; i++){
		printf("Enter id     : ");fflush(stdin);gets(emp[i].id);
		printf("Enter name   : ");fflush(stdin);gets(emp[i].name);
		printf("Enter sex    : ");fflush(stdin);scanf("%c",&emp[i].sex);
		printf("Enter salary : ");scanf("%f",&s);emp[i].salary = s;
	}
	printf("Output before sort\n");
	for(i = 0; i<n; i++){
	printf("%-10s %-18s %-8c %-10.2f\n",emp[i].id,emp[i].name,emp[i].sex,emp[i].salary);
	}
	for( i = 0; i<n-1; i++){
		for(j = i+1; j<n; j++)
			if(emp[j].salary > emp[i].salary){
				temp = emp[i];
				emp[i] = emp[j];
				emp[j] = temp;
			}
	}
	printf("Output after sorted\n");
	for(i = 0; i<n; i++){
	printf("%-10s %-18s %-8c %-10.2f\n",emp[i].id,emp[i].name,emp[i].sex,emp[i].salary);
	}
		
}
*/

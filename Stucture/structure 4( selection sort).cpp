#include <stdio.h>
#include <conio.h>

struct employee{
	char id[20];
	char name[20];
	char sex;
	float salary;
}emp[20], temp;
void input(int n){
	float s;
	for(int i = 0; i<n; i++){
		printf("Id       : ");fflush(stdin);gets(emp[i].id);
		printf("Name     : ");fflush(stdin);gets(emp[i].name);
		printf("Gender   : ");fflush(stdin);scanf("%c",&emp[i].sex);
		printf("Salary   : ");scanf("%f",&s);emp[i].salary = s;
		printf("\n");
	}
}
void output(int n){
	for(int i = 0; i<n; i++){
		printf("%-10s %-10s %-8c %-10.2f\n",emp[i].id,emp[i].name,emp[i].sex,emp[i].salary);
	}
}
void selectionSort(int n){
	for(int i = 0; i<n-1; i++){
		int min_idx = i;
		for(int j = i+1; j<n; j++){
			if(emp[j].salary < emp[min_idx].salary)
			{
				min_idx = j;
			}
		}
		temp = emp[min_idx];
		emp[min_idx] = emp[i];
		emp[i] = temp;
	}
}
int main(){
	int n;
	
	printf("ENTER n: ");fflush(stdin);scanf("%d",&n);
	printf("______________________________________\n\n");
	input(n);
	printf("______________________________________\n\n");
	printf("Before Selection Sort\n");
	printf("--------------------------------------\n");
	output(n);
	printf("______________________________________\n\n");
	printf("After Selection Sort\n");
	printf("--------------------------------------\n");
	selectionSort(n);
	output(n);
	printf("______________________________________\n\n");
	return 0;
}
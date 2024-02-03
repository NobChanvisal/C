#include <stdio.h>
#include <conio.h>

int main(){
	struct employee{
		char id[20];
		char name[20];
		char sex;
		int age;
		float salary,tax,total;
	};
	struct employee emp[20];
	int i,n;
	float s;
	printf("Input n:");scanf("%d",&n);
	//Input:
	for(i=0; i<n; i++){
		printf("Input id: ");fflush(stdin);gets(emp[i].id);
		printf("Input name: ");fflush(stdin);gets(emp[i].name);
		printf("Input sex : ");scanf("%c",&emp[i].sex);
		printf("Input age : ");scanf("%d",&emp[i].age);
		printf("Input salary : ");scanf("%f",&s);emp[i].salary = s;
		printf("\n");
	}
	//header:
	for(i=1; i<= 68; i++){
		printf("-");
	}
	printf("\n");
	//condition:
	for(i=0; i<n; i++){
		if(emp[i].salary >= 250)
			if(emp[i].salary >= 300)
				if(emp[i].salary >= 500)
					emp[i].tax = emp[i].salary*0.4;
				else
					emp[i].tax = emp[i].salary*0.3;
			else
				emp[i].tax = emp[i].salary*0.2;
		else 
			emp[i].tax = emp[i].salary*0.1;
			
	emp[i].total = emp[i].salary - emp[i].tax;
	}
	//Output:
	for(i=0; i<n; i++){
		printf("%-10s %-20s %-5c %-5d %-8.2f %-8.2f %-8.2f\n",emp[i].id,emp[i].name,emp[i].sex,
		emp[i].age,emp[i].salary,emp[i].tax,emp[i].total);
	}
	//footder:
	for(i=1; i<= 68; i++){
		printf("_");
	}
	printf("\n");
	getch();
	return 0;
}
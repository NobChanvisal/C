#include <stdio.h>
#include <conio.h>

int main(){
	struct student{
		char id[20];
		char name[20];
		char sex;
		float math,eng,kh;
		float avg;
	};
	struct student stu[20];
	float m,e,k;
	int i,n;
	printf("Input n: ");scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("Input id  : ");fflush(stdin);gets(stu[i].id);
		printf("Input name: ");fflush(stdin);gets(stu[i].name);
		printf("Input sex : ");fflush(stdin);scanf("%c",&stu[i].sex);
		printf("Input math: ");scanf("%f",&m);stu[i].math=m;
		printf("Input eng : ");scanf("%f",&e);stu[i].eng=e;
		printf("Input kh  : ");scanf("%f",&k);stu[i].kh=k;
		printf("\n");
	}
	for(i=0; i<n; i++){
		stu[i].avg = (stu[i].math + stu[i].eng + stu[i].kh)/3;
	}
	for(i=0; i<n; i++){
		printf("Output Array");
		printf("%-10s %-10s %-8c %-8.2f %8.2f %-8.2f %8.2f\n",stu[i].id,stu[i].name,stu[i].sex,stu[i].math,stu[i].eng,stu[i].kh,stu[i].avg);
	}
	getch();
	return 0;
}
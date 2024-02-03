#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct student{
	char id[20];
	char name[20];
	int age;
	float avg;
}stu[20];
int main(){
	float av;
	int n;
	FILE *fp;
	fp = fopen("D:\\Dev++\\File\\File2.txt","w+");// mode --> w+ for both write read
	printf("Enter n: ");fflush(stdin);scanf("%d",&n);
	for(int i = 0; i<n; i++){
		printf("\nEnter id   : ");fflush(stdin);gets(stu[i].id);
		printf("Enter name : ");fflush(stdin);gets(stu[i].name);
		printf("Enter age  : ");scanf("%d",&stu[i].age);
		printf("Enter avg  : ");scanf("%f",&av);stu[i].avg = av;
		
		fprintf(fp,"%-10s %-15s %-10d %-10.2f\n",stu[i].id,stu[i].name,stu[i].age,stu[i].avg);
	}
	
	rewind(fp);// use with w+
	while(1){
		char ch = fgetc(fp);
			if(feof(fp)){
				break;
				printf("%c",ch);
			}
	}
	fclose(fp);
	getch();
}
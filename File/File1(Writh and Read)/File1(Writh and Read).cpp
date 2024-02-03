#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct student{
		char id[20];
		char name[20];
		int age;
	}stu[20];
	
int main(){
	int n;
	FILE *fp;
	fp = fopen("D:\\Dev++\\File\\File1.txt","w");
	printf("Enter n:");fflush(stdin);scanf("%d",&n);
	for(int i = 0; i<n; i++){
		printf("\nEnter id  :");fflush(stdin);gets(stu[i].id);
		printf("Enter name:");fflush(stdin);gets(stu[i].name);
		printf("Enter age :");scanf("%d",&stu[i].age);
		
		fprintf(fp,"%-10s %-15s %-10d\n",stu[i].id,stu[i].name,stu[i].age);
	}
	fclose(fp);
	
	fp = fopen("D:\\Dev++\\File\\File1.txt","r");
	while(1){
		char ch = fgetc(fp);
			if(feof(fp)) //feof --> f end of file 
				break;
			printf("%c",ch);
	}
	fclose(fp);
	getch();
}
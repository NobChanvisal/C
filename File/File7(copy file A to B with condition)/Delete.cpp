#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct{
	char id[20];
	char name[20];
	char sex;
	int age;
	float score;
}student;
int main(){
	int i,n;
	FILE *fp,*fp1;
	fp  = fopen("File8A.txt","wb");
	fp1 = fopen("File8B.txt","wb");
	float s;
	char dName[20];
	student stu[20];
	printf("Enter n: ");fflush(stdin);scanf("%d",&n);
	for(i = 0; i<n; i++){
		printf("\nEnter id : ");fflush(stdin);gets(stu[i].id);
		printf("Enter name : ");fflush(stdin);gets(stu[i].name);
		printf("Enter sex  : ");fflush(stdin);scanf("%c",&stu[i].sex);
		printf("Enter age  : ");scanf("%d",&stu[i].age);
		printf("Enter score: ");scanf("%f",&s);stu[i].score = s;
		
		fwrite(&stu[i],sizeof(stu[i]),1,fp);
	}
	fclose(fp);
	
	fp  = fopen("File8A.txt","rb");
	printf("Enter name to delete :");fflush(stdin);gets(dName);
	for(i = 0; i<n; i++){
		fread(&stu[i],sizeof(stu[i]),1,fp);
		if(strcmp(stu[i].name,dName) != 0)
		 {
		 	fwrite(&stu[i],sizeof(stu[i]),1,fp1);
		 }
	}
	fclose(fp1);
	fp1 = fopen("File8B.txt","rb");
	for(i = 0; i<n; i++){
		fread(&stu[i],sizeof(stu[i]),1,fp1);
		printf("%10s %15s %8c %8d %8.2f\n",stu[i].id,stu[i].name,stu[i].sex,stu[i].age,stu[i].score);
	}
	fclose(fp1);
	getch();
}
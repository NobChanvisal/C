#include <stdio.h>
#include <conio.h>

typedef struct{
	char id[20];
	char name[20];
	char sex;
	int age;
	float score;
}student;
int main(){
	int i,n;
	FILE *fp,*fp1, *fp2;
	fp  = fopen("Student.txt","wb");
	fp1 = fopen("Gile.txt","wb");
	fp2 = fopen("Boy.txt","wb");
	float s;
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
	//
	int c1 = 0, c2 = 0;
	fp = fopen("Student.txt","rb");
	for( i = 0; i<n; i++){
		fread(&stu[i],sizeof(stu[i]),1,fp);
		if(stu[i].sex == 'f' || stu[i].sex == 'F')
		 {
			fwrite(&stu[i],sizeof(stu[i]),1,fp1);
			c1++;
		 }
		else
		 {
		 	fwrite(&stu[i],sizeof(student),1,fp2);
		 	c2++;
		 }
	}
	fclose(fp1);
	fclose(fp2);
	fp2 = fopen("Boy.txt","rb");
	for(i = 0; i<c1; i++){
		fread(&stu[i],sizeof(student),1,fp2);
		printf("%10s %15s %8c %8d %8.2f\n",stu[i].id,stu[i].name,stu[i].sex,stu[i].age,stu[i].score);
	}
	fclose(fp2);
	getch();
}
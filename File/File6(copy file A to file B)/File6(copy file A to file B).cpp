#include <stdio.h>
#include <conio.h>

typedef struct{
	char id[20];
	char name[20];
	int age;
	float score;
}student;
int main(){
	FILE *fp1, *fp2;
	fp1 = fopen("File6A.bin","wb");
	fp2 = fopen("File6B.bin","wb");
	int i,n;
	float s;
	student stu[20];
	printf("Enter n: ");fflush(stdin);scanf("%d",&n);
	for(i = 0; i<n; i++){
		printf("\nEnter id : ");fflush(stdin);gets(stu[i].id);
		printf("Enter name : ");fflush(stdin);gets(stu[i].name);
		printf("Enter age  : ");scanf("%d",&stu[i].age);
		printf("Enter score: ");scanf("%f",&s);stu[i].score = s;
		
		fwrite(&stu[i],sizeof(student),1,fp1);
	}
	fclose(fp1);
	//
	fopen("File6A.bin","rb");
	for(i = 0; i<n; i++){
		fread(&stu[i],sizeof(student),1,fp1);
		
		fwrite(&stu[i],sizeof(student),1,fp2);
	}
	fclose(fp1);
	fp2 = fopen("File6A.bin","wb");
	for(i = 0; i<n; i++){
		fread(&stu[i],sizeof(student),1,fp2);
		printf("%10s %15s %8d %8.2f\n",stu[i].id,stu[i].name,stu[i].age,stu[i].score);
	}
	fclose(fp2);
	getch();
}
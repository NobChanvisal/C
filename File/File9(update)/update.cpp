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
	student st;
void input(){
	
	printf("\nEnter id : ");fflush(stdin);gets(st.id);
	printf("Enter name : ");fflush(stdin);gets(st.name);
	printf("Enter sex  : ");fflush(stdin);scanf("%c",&st.sex);
	printf("Enter age  : ");scanf("%d",&st.age);	
}
int main(){
	int i,n;
	FILE *fp;
	fp  = fopen("File9.txt","wb");
	float s;
	char up[20];
	student stu[20];
	printf("Enter n: ");fflush(stdin);scanf("%d",&n);
	for(i = 0; i<n; i++){
		printf("\nEnter id : ");fflush(stdin);gets(stu[i].id);
		printf("Enter name : ");fflush(stdin);gets(stu[i].name);
		printf("Enter sex  : ");fflush(stdin);scanf("%c",&stu[i].sex);
		printf("Enter age  : ");scanf("%d",&stu[i].age);
		
		fwrite(&stu[i],sizeof(stu[i]),1,fp);
	}
	fclose(fp);
	//
	fp = fopen("File9.txt","rb+");
	printf("Enter name to update: ");fflush(stdin);gets(up);
	fread(&stu[i],sizeof(stu[i]),1,fp);
	for(i = 0; i<n; i++){
		if(strcmp(stu[i].name,up)==0)
		{
			fseek(fp,i*sizeof(st),0);
			input();
			fwrite(&st,sizeof(st),1,fp);
		}
	}
	fclose(fp);
	fp = fopen("File9.txt","rb");
	for(i = 0; i<n; i++){
		fread(&stu[i],sizeof(stu[i]),1,fp);
		printf("%10s %15s %8c %8d\n",st.id,stu[i].name,stu[i].sex,stu[i].age);
	}
	fclose(fp);
	getch();
}
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char id[20];
	char name[20];
	int age;
	float score;
}student;

int main(){
	FILE *fp;
	fp = fopen("File3.bin","wb");
	student stu[20];
	float s;
	int i,n;
	printf("Enter n: ");scanf("%d",&n);
	for(i = 0; i<n; i++){
		printf("\nEnter id: ");fflush(stdin);gets(stu[i].id);
		printf("Enter name: ");fflush(stdin);gets(stu[i].name);
		printf("Enter age : ");scanf("%d",&stu[i].age);
		printf("Enter score : ");scanf("%f",&s);stu[i].score = s;
		fwrite(&stu[i],sizeof(student),1,fp);
	}
	fclose(fp);
	student st;
	fp = fopen("File3.bin","rb");
	while(fread(&st,sizeof(student),1,fp)==1){
		printf("%-10s %-15s %-10d %-10.2f\n",st.id,st.name,st.age,st.score);
	}
	fclose(fp);
	getch();
}
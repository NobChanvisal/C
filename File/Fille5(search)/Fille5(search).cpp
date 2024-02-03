#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct{
	char id[20];
	char name[20];
	int age;
	float score;
}student;
int main(){
	FILE *fp;
	fp = fopen("File5.bin","wb");
	student stu[20],st;
	char sName[20];
	float s;
	int i,n,k = 0;
	printf("Enter n : ");scanf("%d",&n);
	for(i = 0; i<n; i++){
		printf("\nEnter id      : ");fflush(stdin);gets(stu[i].id);
		printf("Enter name      : ");fflush(stdin);gets(stu[i].name);
		printf("Enter age       : ");scanf("%d",&stu[i].age);
		printf("Enter score     : ");scanf("%f",&s);stu[i].score = s;
		
		fwrite(&stu[i],sizeof(student),1,fp);
	}
	fclose(fp);
	fp = fopen("File5.bin","rb");
	printf("\nEnter name to search : ");fflush(stdin);gets(sName);
	while(fread(&st,sizeof(student),1,fp)==1){
		
		if(strcmp(st.name,sName) == 0){
			k = k +1;
			printf("\n%-10s %-10s %-8d %-8.2f\n",st.id,st.name,st.age,st.score);
		}
		if(k == 0)
		printf("Search not found\n");
		fclose(fp);
		getch();
	}
}
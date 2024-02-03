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
	fp = fopen("File4.bin","wb");
	student stu[40];
	int i,n,j;
	float s;
	printf("Enter n: ");scanf("%d",&n);
	for(i = 0; i<n; i++){
		printf("\nEnter id     : ");fflush(stdin);gets(stu[i].id);
		printf("Enter name   : ");fflush(stdin);gets(stu[i].name);
		printf("Enter age    : ");scanf("%d",&stu[i].age);
		printf("Enter score  : ");scanf("%f",&s);stu[i].score = s;
		
		fwrite(&stu[i],sizeof(student),1,fp);
	}
	fclose(fp);
	student st;
	fp = fopen("File4.bin","rb");
	while(fread(&st,sizeof(student),1,fp)== 1)
		{
			stu[i] = st;
			i++;
			n++;
		}
		student temp;
		for(i = 0; i<n-1; i++)
			for(int j = i+1; j<n; j++)
				if(strcmp(stu[i].name,stu[j].name)>0)
					{
						temp = stu[i];
						stu[i] = stu[j];
						stu[j] = temp;
					}
		for(i = 0; i<n; i++){
			printf("\n%-10s %-15s %-8d %-8.2f\n",stu[i].id,stu[i].name,stu[i].age,stu[i].score);
		}
		fclose(fp);
		getch();
}
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
	int id[15],up_id;
	char name[15][20],up_name[20];
	char sex[15];
	char ne_sex;
	int i,n;
	printf("Input n:");scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("Input id:");scanf("%d",&id[i]);
		printf("Input name:");fflush(stdin);gets(name[i]);
		printf("Input sex:");fflush(stdin);scanf("%c",&sex[i]);
	}
	for(i=0; i<n; i++){
		printf("%-15d %-15s %-15c\n",id[i],name[i],sex[i]);
	}
	printf("Input id to up:");fflush(stdin);scanf("%d",&up_id);
	for(i=0; i<n; i++)
		if(id[i]==up_id){
			printf("Input new sex:");fflush(stdin);scanf("%c",&ne_sex);
			sex[i]=ne_sex;
		}
	for(i=0; i<n; i++)
		printf("%-15d %-15s %-15c\n",id[i],name[i],sex[i]);
}

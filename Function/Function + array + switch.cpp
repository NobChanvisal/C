#include <stdio.h>
#include <conio.h>
#include <string.h>
int id[15],s_id,temp;
char name[15][20],de_name[20],up[20],ne_name[20];
char sex[15];
float avg[15];
char g[15];
int i,j,n,k=0;
float eng[15],kh[15],c[15];
char ch,op;
void insearch_data(){
	printf("==================Insort data================\n");
		for(i=0; i<n; i++){
	fflush(stdin);
	printf("Input id:");scanf("%d",&id[i]);
	printf("Input name:");fflush(stdin);gets(name[i]);
	printf("Input sex:");fflush(stdin);scanf("%c",&sex[i]);
	printf("Input eng:");scanf("%f",&eng[i]);
	printf("Input kh:");scanf("%f",&kh[i]);
	printf("Input c:");scanf("%f",&c[i]);
		}
}
void average(){
	for(i=0; i<n; i++)
	avg[i]=(eng[i]+kh[i]+c[i])/3;
}
void grand(){
for(i=0; i<n; i++)
	if(avg[i]>=200)
		if(avg[i]>=300)
			if(avg[i]>=400)
					g[i]='A';
			else
				g[i]='B';
		else
			g[i]='C';
	else
		g[i]='D';
}
void show_data(){
	printf("=============================================================================\n");
	printf("Id\t\tName\t\t\tSex\t\tAvg\t\tGrand\n");
	printf("=============================================================================\n");
	for(i=0; i<n; i++){
		printf("%-15d %-23s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],avg[i],g[i]);	
	}
	printf("------------------------------------------------------------------------------\n");
}
void sort_data(){
	for(i=0; i<n-1; i++)
		for(j=i+1; j<n; j++)
		if(id[i]>id[j]){
			temp=id[i];
			id[i]=id[j];
			id[j]=temp;
		}
		printf("============================Output After Sorted===========================\n");
		for(i=0; i<n; i++){
		printf("%-15d %-15s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],avg[i],g[i]);	
		}
		printf("--------------------------------------------------------------------------\n");
}
void search_data(){
	printf("Please Input id to search:");scanf("%d",&s_id);
	printf("============================It's Output you search============================\n");
	for(i=0; i<n; i++)
		if(id[i]==s_id){
			k=k+1;
			printf("%-15d %-15s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],avg[i],g[i]);
			
		}
		if(k==0)
		printf("Search not found\n");
		printf("--------------------------------------------------------------------------\n");
}
void update_data(){
	printf("Input name you want update:");fflush(stdin);gets(up);
	for(i=0; i<n; i++)
	if(strcmp(name[i],up)==0){
		printf("Input new name:");fflush(stdin);gets(ne_name);	
		strcpy(name[i],ne_name);
	}
	printf("===========================Output After Updated==========================\n");
	for(i=0; i<n; i++){
	printf("%-15d %-15s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],avg[i],g[i]);
	}
	printf("--------------------------------------------------------------------------\n");
}
void delete_data(){
	printf("Please Input name to delete:");fflush(stdin);gets(de_name);
	for(i=0; i<n; i++)
		if(strcmp(name[i],de_name)==0){
			for(j=i; j<n; j++)
			id[j]=id[j+1];
			n--;
			i--;
		}
		printf("===========================Output After deleted==========================\n");
		for(i=0; i<n; i++){
		printf("%-15d %-15s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],avg[i],g[i]);	
		}
		printf("-------------------------------------------------------------------------\n");			
}
int main(){
	printf("Input n:");scanf("%d",&n);
	insearch_data();
	average();
	grand();
	show_data();
	again:
		printf("------------------------------------------\n");
		printf("\tPlease chose one option:\n");
		printf("1.Sort_data     2.Search_data\n");
		printf("3.Update_data   4.Delete_data\n");
		printf("\n------------------------------------------\n");
		op=getch();
		switch(op){
				case'1': sort_data();
						break;
				case'2': search_data();
						break;
				case'3': update_data();
						break;
				case'4': delete_data();	
						break;
	}
	printf("\nPress A to continue:\n");
	ch=getch();
	if(ch==97 || ch==65)
	goto again;
	return 0;
}

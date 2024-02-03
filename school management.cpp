#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>
int id[15];
int temp1,search_id,up_id,ne_id,de_id,up;
char name[15][20];
char temp2[20],search_name[20],up_name[20],ne_name[20],de_name[20];
float math[15],phy[15],c[15],bio[15],kh[15],eng[15],score[15];
float temp3,s_score,de_score;
char g[15],ch;
char temp4,search_g,de_g;
char sex[15];
char temp5,search_sex,up_sex,ne_sex,de_sex;
int i,j,n,k=0;
char op1,op2,op3,op4,op5;
void data_type(){
	for(i=0; i<n; i++){
		printf("Input id:");scanf("%d",&id[i]);
		printf("Input name:");fflush(stdin);gets(name[i]);
		printf("Input sex:");fflush(stdin);scanf("%c",&sex[i]);
		printf("Input math:");scanf("%f",&math[i]);
		printf("Input Physice:");scanf("%f",&phy[i]);
		printf("Input chemistry:");scanf("%f",&c[i]);
		printf("Input Biology:");scanf("%f",&bio[i]);
		printf("Input Khmer:");scanf("%f",&kh[i]);
		printf("Input English:");scanf("%f",&eng[i]);
	}
}
void average(){
	for(i=0; i<n; i++)
	score[i]=math[i]+phy[i]+c[i]+bio[i]+kh[i]+eng[i];
}
void grand(){
	for(i=0; i<n; i++){
	if(score[i]>=237)
		if(score[i]>=285)
			if(score[i]>=332)
				if(score[i]>=380)
					if(score[i]>=427)
						g[i]='A';
					else
						g[i]='B';
				else
					g[i]='C';
			else
				g[i]='D';
		else
			g[i]='E';
	else
		g[i]='F';
	}
}
void show_data(){
		system("cls");
		printf("=================================Student Data Type=================================\n");
		printf("Id\t\tName\t\t\tSex\t\tScore\t\tGrand\n");
		printf("-----------------------------------------------------------------------------------\n");
		for(i=0; i<n; i++){
		printf("%-15d %-23s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],score[i],g[i]);
	}
		printf("___________________________________________________________________________________\n");
		printf("Press any key for next-->");
		getch();	
}
void sort_data(){
	system("cls");
	printf("=======================================\n");
	printf("Chose one option you want sort=>\n");
	 printf("1.Id  2.Name  3.Score  4.Grand 5.Sex\n");
	printf("---------------------------------------\n");
	op1=getch();
	switch(op1){
		case'1': for(i=0; i<n-1; i++)
				 	for(j=i+1; j<n; j++)
			    		if(id[i]>id[j]){
			    		temp1=id[i];
			    		id[i]=id[j];
			    		id[j]=temp1;
					}
				 printf("=================================Output After sorted===============================\n");
				 for(i=0; i<n; i++){
				 printf("%-15d %-23s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],score[i],g[i]);	
				}
				 printf("___________________________________________________________________________________\n");
				 break;
		case'2': for(i=0; i<n-1; i++)
					 for(j=i+1; j<n; j++)
			    		if(strcmp(name[i],name[j])>0){
			    		strcpy(temp2,name[i]);
			    		strcpy(name[i],name[j]);
			    		strcpy(name[j],temp2);
					}
				 printf("================================Output After sorted================================\n");
				 for(i=0; i<n; i++){
				 printf("%-15d %-23s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],score[i],g[i]);	
				}
				 printf("___________________________________________________________________________________\n");
				 break;
		case'3': for(i=0; i<n-1; i++)
				 	for(j=i+1; j<n; j++)
			    		if(score[i]<score[j]){
			    		temp3=score[i];
			    		score[i]=score[j];
			    		score[j]=temp3;
					}
				 printf("=================================Output After sorted===============================\n");
				 for(i=0; i<n; i++){
				 printf("%-15d %-23s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],score[i],g[i]);	
				}
				 printf("___________________________________________________________________________________\n");
				 break;
		case'4': for(i=0; i<n-1; i++)
				 	for(j=i+1; j<n; j++)
			    		if(g[i]<g[j]){
			    		temp4=g[i];
			    		g[i]=g[j];
			    		g[j]=temp4;
					}
				 printf("==================================Output After sorted==============================\n");
				 for(i=0; i<n; i++){
				 printf("%-15d %-23s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],score[i],g[i]);	
				}
				 printf("___________________________________________________________________________________\n");
				 break;
		case'5': for(i=0; i<n; i++)
					for(j=0; j<n; j++)
						if(sex[i]<sex[j]){
							temp5=sex[i];
							sex[i]=sex[j];
							sex[j]=temp5;
						}
				 printf("================================Output After sorted================================\n");
				 for(i=0; i<n; i++){
				 printf("%-15d %-23s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],score[i],g[i]);	
				}
				 printf("___________________________________________________________________________________\n");
				 getch();
				 break;		
	}	
}
void search_data(){
	system("cls");
	printf("=======================================\n");
	printf("Chose one option you want search=>\n");
	 printf("1.Id  2.Name  3.Score 4.Grand 5.Sex\n");
	printf("---------------------------------------\n");
	op2=getch();
	switch(op2){
		case'1': printf("Input id to search:");scanf("%d",&search_id);
				 printf("==================================Output after search==============================\n");
				 for(i=0; i<n; i++)
				 if(id[i]==search_id){
				 	k=k+1; 
				 	printf("%-15d %-23s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],score[i],g[i]);
				 }
				 if(k==0)
				 printf("Search not found\n");	
			 	 printf("___________________________________________________________________________________\n");
			 	 break;
		case'2': printf("Input name to search:");fflush(stdin);gets(search_name);
				 printf("==================================Output after search==============================\n");
				 for(i=0; i<n; i++)
				 if(strcmp(name[i],search_name)==0){
				 	k=k+1; 
				 	printf("%-15d %-23s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],score[i],g[i]);
				 }
				 if(k==0)
				 	printf("Search not found\n");
			 	 printf("___________________________________________________________________________________\n");
			 	 break;
		case'3': printf("Input score to search:");scanf("%f",&s_score);
				 printf("==================================Output after search==============================\n");
				 for(i=0; i<n; i++)
				 if(score[i]==s_score){
				 	k=k+1; 
				 	printf("%-15d %-23s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],score[i],g[i]);
				 }
				 if(k==0)
				 	printf("Search not found\n");
			 	 printf("___________________________________________________________________________________\n");
			 	 break;
		case'4': printf("Input grand to search:");scanf("%c",&search_g);
				 printf("==================================Output after search==============================\n");
				 for(i=0; i<n; i++)
				 if(g[i]==search_g){
				 	k=k+1; 
				 	printf("%-15d %-23s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],score[i],g[i]);
				 }
				 if(k==0)
				 	printf("Search not found\n");
			 	 printf("___________________________________________________________________________________\n");
			 	 break;
		case'5': printf("Input sex to search:");fflush(stdin);scanf("%c",&search_sex);
				 printf("==================================Output after search==============================\n");
				 for(i=0; i<n; i++)
				 		if(sex[i]==search_sex){
				 			k=k+1;
				 			printf("%-15d %-23s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],score[i],g[i]);
						 }	
						 if(k==0){
						  printf("Search not found\n");	
						 }
				 printf("___________________________________________________________________________________\n");
				 break;		 				 
	}
}
void update_data(){
	system("cls");
	printf("=======================================\n");
	printf("Chose one option you want update=>\n");
	printf("     1.Id  2.Name  3.sex\n");
	printf("---------------------------------------\n");
	op3=getch();
	switch(op3){
		case'1': printf("Input id to update:");scanf("%d",&up_id);
				 for(i=0; i<n; i++)
				 	if(id[i]==up_id){
				 	printf("Input New id:");scanf("%d",&ne_id);
				 	id[i]=ne_id;
				 }
				 printf("===============================Output after Updated================================\n");
				 for(i=0; i<n; i++){
				 printf("%-15d %-23s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],score[i],g[i]);	
				 }
				 printf("___________________________________________________________________________________\n");
				 break;
		case'2': printf("Input name you want update:");fflush(stdin);gets(up_name);
				 for(i=0; i<n; i++)
					if(strcmp(name[i],up_name)==0){
					printf("New Name:");fflush(stdin);gets(ne_name);
					strcpy(name[i],ne_name);
				 }
				 printf("===============================Output after Updated================================\n");
				 for(i=0; i<n; i++){
				 printf("%-15d %-23s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],score[i],g[i]);	
				 }
				 printf("___________________________________________________________________________________\n");
				 break;
		case'3': printf("Input student id to update sex:");fflush(stdin);scanf("%d",&up);
				 for(i=0; i<n; i++)
				 	if(id[i]==up){
				 		printf("Input new sex:");fflush(stdin);scanf("%c",&ne_sex);
				 		sex[i]=ne_sex;
					 }
				 printf("===============================Output after Updated================================\n");
				 for(i=0; i<n; i++){
				 printf("%-15d %-23s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],score[i],g[i]);	
				 }
				 printf("___________________________________________________________________________________\n");
				 getch();
				 break;
	}
}
void delete_data(){
	system("cls");
	printf("=======================================\n");
	printf("Chose one option you want delete=>\n");
	  printf("1.Id  2.Name  3.Score  4.Grand 5.Sex\n");
	printf("---------------------------------------\n");
	op4=getch();
	switch(op4){
		case'1': printf("Input id to delete:");scanf("%d",&de_id);
				 for(i=0; i<n; i++)
				 if(id[i]==de_id){
				 	for(j=i; j<n; j++)
				 	id[j]==id[j+1];
				 	n--;
				 	i--;
				 } 
				 printf("===============================Output after deleted================================\n");
				 for(i=0; i<n; i++){
				  printf("%-15d %-23s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],score[i],g[i]);	
				 }
				 printf("___________________________________________________________________________________\n");
				 break;
		case'2': printf("Input name to delete:");fflush(stdin);gets(de_name);
				 for(i=0; i<n; i++)
				 if(strcmp(name[i],de_name)){
				 	for(j=i; j<n; j++)
				 	strcpy(name[j],name[j+1]);
				 	n--;
				 	i--;
				 } 
				 printf("===============================Output after deleted================================\n");
				 for(i=0; i<n; i++){
				  printf("%-15d %-23s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],score[i],g[i]);	
				 }
				 printf("___________________________________________________________________________________\n");
				 break;
		case'3': printf("Input score to delete:");scanf("%f",&de_score);
				 for(i=0; i<n; i++)
				 if(score[i]==de_score){
				 	for(j=i; j<n; j++)
				 	score[j]==score[j+1];
				 	n--;
				 	i--;
				 } 
				 printf("===============================Output after deleted================================\n");
				 for(i=0; i<n; i++){
				  printf("%-15d %-23s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],score[i],g[i]);	
				 }
				 printf("___________________________________________________________________________________\n");
				 break;
		case'4': printf("Input Grand to delete:");scanf("%d",&de_g);
				 for(i=0; i<n; i++)
				 if(g[i]==de_g){
				 	for(j=i; j<n; j++)
				 	g[j]==g[j+1];
				 	n--;
				 	i--;
				 } 
				 printf("===============================Output after deleted================================\n");
				 for(i=0; i<n; i++){
				  printf("%-15d %-23s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],score[i],g[i]);	
				 }
				 printf("___________________________________________________________________________________\n");
				 break;
		case'5': printf("Input sex to delete:");fflush(stdin);scanf("%c",&de_sex);
				 for(i=0; i<n; i++)
				 	if(sex[i]==de_sex){
				 		for(j=i; j<n; j++){
				 			sex[j]=sex[j+1];
				 			n--;
				 			i--;
						 }
				 printf("================================Output after deleted===============================\n");
				 for(i=0; i<n; i++){
				  printf("%-15d %-23s %-15c %-15.2f %-15c\n",id[i],name[i],sex[i],score[i],g[i]);	
				 }
				 printf("___________________________________________________________________________________\n");
				 getch();
				 break;		 
			}
	}
}
int main(){
	printf("Input n:");scanf("%d",&n);
	data_type();
	average();
	grand();
	show_data();
	do{
	system("cls");
	printf("\n------------------------------------------------------------\n");
	printf("\t\tPlease chose one option=>\n");
	printf("a.Sort_data  b.Search_data  c.Update_data d.Delete_data");
	printf("\n------------------------------------------------------------\n");
	op5=getch();
	switch(op5){
		case'a': sort_data();
				 break;
		case'b': search_data();
				 break;
		case'c': update_data();
				 break;
		case'd': delete_data();
				 break;
	}
	 printf("Press y to continue || Press Any key to Exit");
	 ch=getch();
	}while(ch=='y'|| ch=='Y');
	return 0;
}

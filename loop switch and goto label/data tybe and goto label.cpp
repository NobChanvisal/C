#include <stdio.h>
#include <iostream>
#include <conio.h>
int main(){
	int id;
	char name[20], add[20];
	char ch,sex;
	int age;
	again:
		system("cls");
		printf("Input Id:");scanf("%d",&id);
		printf("Input Name:");fflush(stdin);gets(name);
		printf("Input Sex:");scanf("%c",&sex);
		printf("Input Age:");scanf("%d",&age);
		printf("Input Address:");fflush(stdin);gets(add);
		printf("======================================================================\n");
		printf("\t%d \t%s \t%c \t%d \t%s\n",id,name,sex,age,add);
		printf("======================================================================\n");
		printf("\n|| Press B for Input again ==>\n");
		ch=getch();
		if(ch==66)
		goto again;
}

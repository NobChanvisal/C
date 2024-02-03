#include <stdio.h>
#include <iostream>
#include <conio.h>
int id,age;
char ch;
char name[20],shift[20],sex,g;
float avg,assignment,mid_term,final;
void data_type(){
	printf("Input id:");scanf("%d",&id);
	printf("Input name:");fflush(stdin);gets(name);
	printf("Input sex:");scanf("%c",&sex);
	printf("Input age:");scanf("%d",&age);
	printf("Input shift:");fflush(stdin);gets(shift);
	
}
float average(float assignment, float mid_term, float final){
	avg=(assignment+mid_term+final)/3;
	return avg;
}
char grand(float avg){
	if(avg>=50)
		if(avg>=100)
			if(avg>=150)
				g='A';
			else
			g='B';
		else
		g='C';
	else
	g='D';
	return g;
}
void show_data(float assignment, float mid_term, float final){
	printf("================================================================================================================\n");
	printf("\t%d\t%s\t%c\t%d\t%s\t",id,name,sex,age,shift);
	printf("\t%.2f\t%.2f\t%.2f\t%.2f\t%c\n",assignment,mid_term,final,average(assignment,mid_term,final),grand(average(assignment,mid_term,final)));
	printf("================================================================================================================\n");	
}
int main(){
input:
	printf("Input Assignment point:");scanf("%f",&assignment);
	printf("Input Mid_term point:");scanf("%f",&mid_term);
	printf("Input Final point:");scanf("%f",&final);
	data_type();
	show_data(assignment,mid_term,final);
	printf("Please press A or B if you want to input again==>\n");
	ch=getch();
	if(ch=='B' || ch=='A')
	goto input;
	return 0;
}



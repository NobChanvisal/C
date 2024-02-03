#include <stdio.h>
#include <conio.h>
float math, eng, kh, avg;
char g;//parameter
float everage(float math, float eng, float kh){
	return (math+eng+kh)/3;
}
char grande(float avg){
	if(avg<75)
		if(avg<65)
			if(avg<55)
				g='D';
			else
				g='C';
		else
			g='B';
	else
		g='A';
	return g;
}
void show_data(float math, float eng, float kh){
	printf("%.2f\t%.2f\t%.2f\t%.2f\t%c",math,eng,kh,everage(math,eng,kh),grande(everage(math,eng,kh)));
}
int main(){
	printf("Input math:");scanf("%f",&math);
	printf("Input eng:");scanf("%f",&eng);
	printf("Input kh:");scanf("%f",&kh);
	show_data(math,eng,kh);
	getch();
}
/*
//No parameter
#include <stdio.h>
#include <conio.h>
float kh,eng,math,avg,pay;  
char g;
float average (){
	avg=(kh +eng +math)/3;
return avg;
}
char grand(){
	if(avg>=300)
		if(avg>=250)
			if(avg>=200)
					g='A';
			else
				g='B';
		else
			g='C';
	else
		g='D';
	return g;
}
void show_data (){
printf("%.2f\t%.2f\t%.2f\t%.2f\t%c\n",kh,eng,math,avg,g);
}
int main(){
	printf("Input kh:");scanf("%f",&kh);
	printf("Input eng:");scanf("%f",&eng);
	printf("Input math:");scanf("%f",&math);
	avg=average();
	g=grand();
	show_data();
return 0;
}

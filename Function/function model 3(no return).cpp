//No parameter
#include <stdio.h>
#include <conio.h>
float dis,pay,total;
void discount(){
	if(pay<1500)
		if(pay<300)
			dis=pay*0.05;
		else
		 dis=pay*0.07;
	else
		dis=pay*0.12;
	total=pay-dis;
}
void show_data(){
	printf("%.2f\t%.2f\t%.2f\t",pay,dis,total);
}	
int main(){
	printf("Input pay:");scanf("%f",&pay);
	discount();
	show_data();
	getch();
}
/*//parameter
#include <stdio.h>
#include <conio.h>
float pay,dis,total,p;
void discount(float pay)
{	
	if(pay<1500)
		if(pay<300)
			dis=pay*0.05;
		else
		 dis=pay*0.07;
	else
		dis=pay*0.12;
	total=pay-dis;
}
void show_data(float pay,float dis,float total){
	printf("%.2f\t%.2f\t%.2f\t",pay,dis,total);
}
int main(){
	printf("Input pay:");scanf("%f",&pay);
	discount(pay);
	show_data(pay,dis,total);
	getch();
}

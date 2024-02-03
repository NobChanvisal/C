/*include <stdio.h>
#include <conio.h>
float pay,dis,total;
void discount(){
	if(pay>=150)
		if(pay>=200)
			if(pay>=250)
				dis=pay*0.05;
			else
				dis=pay*0.1;
		else
			dis=pay*0.15;
	else
		dis=pay*0.2;
	total=pay-dis;
}
void show_data(){
	printf("%.2f\t%.2f\t%.2f\n",pay,dis,total);
}
int main(){
	printf("Input payment:");scanf("%f",&pay);
	discount();
	show_data();
	return 0;
}

#include <stdio.h>
#include <conio.h>
float pay,dis,total;
void discount(float pay){
	if(pay<250)
		if(pay<200)
			if(pay<150)
				dis=pay*0.05;
			else
				dis=pay*0.04;
		else
			dis=pay*0.03;
	else
		dis=pay*0.02;
	total=pay-dis;
}
void show_data(float pay, float dis, float total){
	printf("%.2f\t%.2f\t%.2f\n",pay,dis,total);
}
int main(){
	printf("Input payment:");scanf("%f",&pay);
	discount(pay);
	show_data(pay,dis,total);
	return 0;
}*/
#include <stdio.h>
#include <conio.h>
float pay,dis,total;
float discount(float pay){
	if(pay<250)
		if(pay<200)
			if(pay<150)
				dis=pay*0.05;
			else
				dis=pay*0.04;
		else
			dis=pay*0.03;
	else
		dis=pay*0.02;
	return dis;
}
void show_data(float pay, float dis, float total){
	printf("%.2f\t%.2f\t%.2f\n",pay,discount(pay),total);
}
int main(){
	printf("Payment:");scanf("%f",&pay);
	total=pay-dis;
	show_data(pay,dis,total);
}

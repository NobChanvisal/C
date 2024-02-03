#include <stdio.h>
#include <conio.h>
#include <iostream>
int main(){
	float use,news,old;
	float pay;
	char ch;
	input:
		system("color F");
	printf("Input new:");scanf("%f",&news);
	printf("Input old:");scanf("%f",&old);
		if(news<old){
			system("cls");
			system("color 4");
			printf("|| Please Input again ||\n");
		}	
		else{
			use=news-old;
			if(use<50)
					pay=use*350;
			else if(use<100)
					pay=use*400;
			else if(use<150)
					pay=use*500;
			else if(use<200)
					pay=use*600;
			else if(use<150)
					pay=use*500;	
			else if(use<200)
					pay=use*600;	
			else
					pay=use*700;
	printf("\t|| Payment=%.2f ||\n",pay);		
		}
	printf("Press A to input again==>\n");
	ch=getch();
	if(ch=='A')
	goto input;
	return 0;
}

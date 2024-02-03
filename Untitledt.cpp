#include <stdio.h>
#include <conio.h>
#include <iostream>
int main(){
	int money=10000,money1,money2,money3;
	int win1=0,win2=0,win3=0;
	char ch,op3;
	int q1,q2,q3,i;
	game:
		system("cls");
		printf("__________________________________\n");
		printf("YOU HAVE $10000 TO PLAY THIS GAME\n");
		ch=getch();
		system("cls");				 
					for(i=0; i<=5; i++){
					op3=i;	
					switch(op3){
								case 1: printf("____________________________________\n");
										printf("YOU HAVE $10000 TO PLAY\n");
										printf("Please input money to play:");scanf("%d",&money1);
										if(money1<=900){
										system("cls");
										printf("\n--------------------------------------\n");
										printf("    SORRY YOU CAN PLAY!!\n");
										printf("Please input money maximum $1000\n");
										printf("________________________________________\n");
										getch();
										goto game;	
										}
										else if(money1<=money){
											printf("------------------------------------------------------------------------\n");
											printf("\t1.Which team won the Cambodai Premier League in 2020-2021\?\n");
											printf("------------------------------------------------------------------------\n");
											printf("a.Boeung ket FC\nb.Phnom Penh Crown\nc.Visakha\nd.Svay Rieng\n");
											printf("________________________________________________________________________\n");
											if(getch()=='a'){
												printf("\n\t\tCorrect!!!|You get $%d|\n",money1);
												win1=money+money1;																	
												getch();
											break;
											}
											else
											{
												printf("\n\tWrong!!! the correct answer is a.Boeung ket FC|0 Point|\n");												
												win1=money-money1;
												getch();
											break;
											}
										}
										else
										printf("______________________________________\n");
										printf("\nYou can't input money maximum \n");
										getch();
										goto game;
								case 2: if(win1<=0){
										printf("------------------------------------------\n");
										printf("You don't have't Money to play!!\n");								 			
										printf("\n\n\t\t|||Game Over|||");										
										}								 			
								 		else{
								 			printf("____________________________________\n");
											printf("YOU HAVE $%d TO PLAY\n",win1);
											printf("Please input money to play:");scanf("%d",&money2);
											if(money2<=900){
											system("cls");
											printf("\n--------------------------------------\n");
											printf("    SORRY YOU CAN PLAY!!\n");
											printf("Please input money maximum $1000\n");
											printf("________________________________________\n");
											getch();
											goto game;	
												}
											else if(money2<=win1){
											printf("------------------------------------------------------------------------\n");
											printf("\t2.Which team won the Cambodai Premier League in 2020-2021\?\n");
											printf("------------------------------------------------------------------------\n");
											printf("a.Boeung ket FC\nb.Phnom Penh Crown\nc.Visakha\nd.Svay Rieng\n");
											printf("________________________________________________________________________\n");
											if(getch()=='a'){
												printf("\n\t\tCorrect!!!|You get $%d|\n",money2);				
												win2=win1+money2;																	
												getch();
											break;
												}
											else
											{
												printf("\n\tWrong!!! the correct answer is a.Boeung ket FC|0 Point|\n");																							
												win2=win1-money2;
												getch();
											break;
											}
										}
											else
											printf("You can't play!!");
											getch();
											goto game;
									}
								case 3: if(win2<=0){
										printf("You don't have't money to play!!\n");								 			
										printf("\n\n\t\t|||GAME OVER|||");										
										}								 			
								 		else{
								 			printf("____________________________________\n");
											printf("YOU HAVE $%d TO PLAY\n",win2);
											printf("Play input money to play:");scanf("%d",&money3);
											if(money3<=900){
											system("cls");
											printf("\n--------------------------------------\n");
											printf("    SORRY YOU CAN PLAY!!\n");
											printf("Please input money maximum $1000\n");
											printf("________________________________________\n");
											getch();
											goto game;	
											}
											else if(money3<=win2){
											printf("------------------------------------------------------------------------\n");
											printf("\t3.Which team won the Cambodai Premier League in 2020-2021\?\n");
											printf("------------------------------------------------------------------------\n");
											printf("a.Boeung ket FC\nb.Phnom Penh Crown\nc.Visakha\nd.Svay Rieng\n");
											printf("________________________________________________________________________\n");
											if(getch()=='a'){
												printf("\n\t\tCorrect!!!|You get $%d|\n",money3);
												win3=win2+money3;																	
												getch();
											break;
											}
											else
											{
												printf("\n\tWrong!!! the correct answer is a.Boeung ket FC|0 Point|\n");																							
												win3=win2-money3;
												getch();
											break;
											}
										}
											else
											printf("Sal\n");
											getch();								 			
											goto game;
									}						
}
}
}
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#include <ctype.h>
char name[20];
char t,ch,ch1,op1,op2,op3;
int q = 0,total;
int i,money=25000,money1,money2;
void pname(){
	printf("\n\t===============================\n");
	printf("\n\t\t   Rigister:");
	printf("\n\n\tName:");fflush(stdin);gets(name);
}
void test(){
	system("cls");
	mainmenu:
	printf("----------------------------------------\n");
	printf("\tPlease chose one option\n");
	printf("\t 1.Song\n\t 2.Sport\n");
	printf("________________________________________\n");
	op1=getch();
	switch(op1){
		case'1': system("cls");
				 for(i=1; i<=5; i++){
				 	op2=i;
				 	switch(op2){
				 		case 1: system("cls");
						 		printf("------------------------------------------------------------------------\n");
								printf("\t|Song title:| Time to write\n");
								printf("------------------------------------------------------------------------\n");
								printf("a.G-devit\nb.Vanda\nc.Bros La\nd.Khmeng Khmer\n");
								printf("________________________________________________________________________\n");
								if(tolower(getch())=='b')
								{
									printf("\n\t\tCorrect!!!|100 Point|\n");
									q++;
									getch();
									break;
									}
								else if(tolower(getch())=='q'){
									goto mainmenu;
								}
								else
								{
									printf("\n\tWrong!!! the correct answer is b.Vanda|0 Point|\n");
									getch();
									break;
								}
						case 2: system("cls");
								printf("-----------------------------------------------------------------------------------\n");
								printf("\t|Song title:| Neavear Jivit\n");
								printf("-----------------------------------------------------------------------------------\n");
								printf("a.Sin Sisamouth\nb.Houl Lavi\nc.Keo Sarath\nd.Noy Vaneth\n");
								printf("___________________________________________________________________________________\n");
								if(tolower(getch())=='a')
										{
									printf("\n\t\tCorrect!!!|100 Point|\n");
									q++;
									getch();
									break;
								}
								else
								{
									printf("\n\tWrong!!! the correct answer is a.Sin Sisamouth|0 Point|\n");
									getch();
									break;
							}
						case 3: system("cls");
								printf("------------------------------------------------------------------------\n");
								printf("\t|Song title:| Firt Kiss\n");
								printf("------------------------------------------------------------------------\n");
								printf("a.Tena\nb.Mam Pichrith\nc.Khmeng Khmer\nd.Small world small band\n");
								printf("________________________________________________________________________\n");
								if(tolower(getch())=='d')
									{
									printf("\n\t\tCorrect!!!|100 Point|\n");
									q++;
									getch();
									break;
								}
								else
							{
									printf("\n\tWrong!!! the correct answer is d.Small world small band|0 Point|\n");
									getch();
									break;
							}
						case 4: system("cls");
								printf("------------------------------------------------------------------------\n");
								printf("\t|Song title:| Lea Bathdombong\n\n");
								printf("------------------------------------------------------------------------\n");
								printf("a.Pen Ron\nb.Him Sivan\nc.Ros Serey Sothea\nd.Meng keoopichenda\n");
								printf("________________________________________________________________________\n");
								if(tolower(getch())=='c')
										{
									printf("\n\t\tCorrect!!!|100 Point|\n");
									q++;
									getch();
									break;
									}
								else
								{
									printf("\n\tWrong!!! the correct answer is c.Ros Serey Sothea|0 Point|\n");
									getch();
									break;
								}
						case 5: system("cls");
								printf("------------------------------------------------------------------------\n");
								printf("\t|Song title:| Sak Srolanh Knea Ban Teh\n\n");
								printf("------------------------------------------------------------------------\n");
								printf("a.Chhorn Sovanreach-Pich Saophea\nb.Step-Zusana\nc.Chhorn Sovanreach-Zusana\nd.Step-Pich Saophea\n");
								printf("________________________________________________________________________\n");
								if(tolower(getch())=='b')
									{
									printf("\n\t\tCorrect!!!|100 Point|\n");
									q++;
									getch();
									break;
									}
								else
								{
									printf("\n\tWrong!!! the correct answer is b.Step-Zusana|0 Point|\n");
									getch();
									break;
					 }
				 } 	
			}break;
		case'2': system("cls");
				 for(i=1; i<=5; i++){
				 	op3=i;
				 	switch(op3){
				 		case 1: printf("------------------------------------------------------------------------\n");
								printf("\tWhich country will organize Sea game 2023\?\n");
								printf("------------------------------------------------------------------------\n");
								printf("a.Cambodia\nb.Thailand\nc.Veitnam\nd.Malaysai\n");
								printf("________________________________________________________________________\n");
								if(tolower(getch())=='a')
								{
									printf("\n\t\tCorrect!!!|100 Point|\n");
									q++;
									getch();
									break;
									}
								else
								{
									printf("\n\tWrong!!! the correct answer is a.Cambodia|0 Point|\n");
									getch();
									break;
								}
						case 2: system("cls");
								printf("-----------------------------------------------------------------------------------\n");
								printf("\tHow many clubs competed in the cambodia premier league in 2022 season\?\n");
								printf("-----------------------------------------------------------------------------------\n");
								printf("a.7\nb.8\nc.10\nd.11\n");
								printf("___________________________________________________________________________________\n");
									if(tolower(getch())=='b')
										{
									printf("\n\t\tCorrect!!!|100 Point|\n");
									q++;
									getch();
									break;
								}
								else
								{
									printf("\n\tWrong!!! the correct answer is b.8|0 Point|\n");
									getch();
									break;
								}
						case 3: system("cls");
								printf("------------------------------------------------------------------------\n");
								printf("\tWhich team has won the most Cambodia Premier league\n");
								printf("------------------------------------------------------------------------\n");
								printf("a.Boeung Ket\nb.Visakha\nc.Svay Rieng\nd.Phnom Penh Crown\n");
								printf("________________________________________________________________________\n");
								if(tolower(getch())=='d')
								{
									printf("\n\t\tCorrect!!!|100 Point|\n");
									q++;
									getch();
									break;
									}
								else
								{
									printf("\n\tWrong!!! the correct answer is d.Phnom Penh Crown|0 Point|\n");
									getch();
									break;
								}
						case 4: system("cls");
								printf("-----------------------------------------------------------------------------------\n");
								printf("\tHow many sport competed in the Sea Game in 2023\?\n");
								printf("-----------------------------------------------------------------------------------\n");
								printf("a.35\nb.37\nc.39\nd.41\n");
								printf("___________________________________________________________________________________\n");
									if(tolower(getch())=='c')
										{
									printf("\n\t\tCorrect!!!|100 Point|\n");
									q++;
									getch();
									break;
								}
								else
								{
								printf("\n\tWrong!!! the correct answer is c.39|0 Point|\n");
									getch();
									break;
							}
						case 5: system("cls");
								printf("-----------------------------------------------------------------------------------\n");
								printf("\tWhich team won the Hun Sen Cup title in 2021\?\n");
								printf("-----------------------------------------------------------------------------------\n");
								printf("a.Visakha\nb.Svay Rieng\nc.Phnom Penh Crown\nd.Boung Ket\n");
								printf("___________________________________________________________________________________\n");
									if(tolower(getch())=='a')
										{
									printf("\n\t\tCorrect!!!|100 Point|\n");
									q++;
									getch();
									break;
								}
								else
								{
									printf("\n\tWrong!!! the correct answer is a.Visakha|0 Point|\n");
									getch();
									break;
							}
}
}
}
}
void test2(){
	int win1,win2;
		system("cls");
		printf("_____________________________________________________________________________\n");
		printf("\n  -->|CONGRATULATION %s YOU ARE ELIGIBLE TO PLAY THE NEXT GAME|<--\n",&name);
		printf("_____________________________________________________________________________\n");
		printf("Please press any key to continue the game\n");
		getch();
		system("cls");
		game:
		printf("______________________________________\n");
		printf(" \nYOU HAVE $25000 TO PLAY THIS GAME\n");
		printf("______________________________________\n");
		ch=getch();
		system("cls");				 
					for(i=0; i<=5; i++){
					op3=i;	
					switch(op3){
								case 1: 
										question1:
											system("cls");
											printf("____________________________________\n");
											printf("YOU HAVE $25000 TO PLAY\n");
											printf("Please input money to play:");scanf("%d",&money1);
											if(money1<=900){
											system("cls");
											printf("\n--------------------------------------\n");
											printf("    SORRY YOU CAN'T PLAY!!\n");
											printf("Please input money maximum $1000\n");
											printf("________________________________________\n");
											getch();
											goto question1;	
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
										system("cls");
										printf("\n--------------------------------------\n");
										printf("YOU DON'T HAVE ENOUGH MONEY TO PLAY!!\n");
										printf("       |You can input again|\n");
										printf("________________________________________\n");
										getch();
										goto question1;
								case 2: 
										question2:
											system("cls");
											if(win1<=0){
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
											goto question2;	
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
											system("cls");
											system("cls");
											printf("\n--------------------------------------\n");
											printf("YOU DON'T HAVE ENOUGH MONEY TO PLAY!!\n");
											printf("       |You can input again|\n");
											printf("________________________________________\n");
											getch();
											goto question2;
									}				
			}
	}
}

void score(){
	system("cls");
	total = q * 100;
	printf("------------------------------------------\n");
	printf("\t|| Your Full point is %d||\n",total);
	printf("__________________________________________\n");
	getch();
}
void game(){
	if(total<300){
		printf("__________________________________________________________________________________\n");
		printf("\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THE NEXT GAME, BETTER LUCK NEXT TIME\n");
		printf("__________________________________________________________________________________\n");
		printf("-->> Press S to play again|| Any key to exit");
		ch=getch();
		if(ch=='s'||ch=='S'){
			test();
			score();
			game();	
		}
		else
			exit;	
	}
	else
		test2();	    
}
int main(){
	printf("-----------------------------------\n");
	printf("\tTHIS IS C PROGRAMMING IQ GAME\n");
	printf("-----------------------------------\n");
	printf("\t\tWelcome\n");
	printf("\tTO\n");
	printf("\t\tthe game\n");
	printf("___________________________________\n");
	printf("Press S to start the Game || Any key to exit");
	ch=getch();
	if(ch=='s'||ch=='S'){
				pname();
				test();
				score();
				game();
	}		
	else
		exit;			   	 
	}
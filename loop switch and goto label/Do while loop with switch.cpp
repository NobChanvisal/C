#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>

int main(){
int a,b,c;
float x,x1,x2,delta;
char ch,ch1;
	do{
		printf("=============================================\n");
		printf("\tPlease chose one optine(a or b)\n");
		printf("\ta.Equations 1|| b.Equations 2\n");
		printf("=============================================\n");
		ch=tolower(getch());//tolower: change A to a ; loupper : change a to A
		switch(ch){
			case 'a':	printf("Input a:");scanf("%d",&a);
						printf("Input b:");scanf("%d",&b);
							if(a==0)
								{
									if(b==0)
										printf("Answer:Many Root\n");
									else
										printf("Answer:No Root\n");
								}
							else
						x=(float)-b/a;
						printf("Answer:X=%.2f\n",x);
						break;
			case 'b':	printf("Input a:");scanf("%d",&a);
						printf("Input b:");scanf("%d",&b);
						printf("Input c:");scanf("%d",&c);
							if(a==0)
								if(b==0)
									if(c==0)
										printf("Answer:Many Roots\n");
									else
										printf("Answer:No Root\n");
								else{
									x=(float)-c/b;
									printf("Answer:Root x= %d\n",x);
								}						
							else{
							
								delta=b*b-4*a*c;
									if(delta<0)
										printf("No Roots\n");			
									else
									{
									
										x=(float)(-b+sqrt(delta))/2*a;
										x=(float)(-b-sqrt(delta))/2*a;
						printf("Answer: X1=%.2f, X2=%.2f\n",x1,x2);
						break;
							}
						}
					}
		printf("\t||Press A to continue ==>\n");
		ch1=getch();	
	}while(ch1=='a'||ch1=='A');
	return 0;						
}


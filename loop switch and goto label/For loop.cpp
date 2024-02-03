/*#include <stdio.h>
#include <conio.h>
int main(){
	int i,j,k;
	for(i=1; i<=5; i++){
		for(j=1; j<=5; j++)
			printf(" ");{
		for(k=i; k<=5;	k++)
			printf("*");
		}
		printf("\n");	
	}
	return 0;			
}

#include <stdio.h>
#include <conio.h>
int main(){
	int i,j;
	for(i=1; i<=5; i++){
		for(j=5; j>=i; j--)
		printf("*");
		printf("\n");
	}
	return 0;
}
#include <stdio.h>
#include <conio.h>
int main(){
	int i,j;
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++)
		printf("*");
		printf("\n");
	}
	return 0;
}
#include <stdio.h>
#include <conio.h>
int main(){
	int i,j,k,l;
	for(i=1; i<=5; i++){
		for(j=i; j<=5; j++){
			printf(" ");
		}
		for(k=1; k<=i; k++){
			printf("*");
		}
		for(l=1; l<i; l++){
			printf("*");
		}
			printf("\n");
	}

	return 0;			
}*/
#include <stdio.h>
#include <conio.h>
int main(){
	int i,j,k,l;
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			printf(" ");
		}
		for(k=5; k>=i; k--){
			printf("*");
		}
		for(l=i; l<=4; l++){
			printf("*");
		}
			printf("\n");
	}

	return 0;			
}


#include <stdio.h>
#include <conio.h>
int main(){
	int r,c;
	for(r=2; r<=5; r++){
		for(c=1; c<=10; c++)
			printf("%d * %d = %d\n",r,c,r*c);
			printf("\n");
	}
	return 0;
}

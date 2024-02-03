#include <stdio.h>
#include <conio.h>
int main(){
	int i,n,sum=0;
	printf("Input n:");scanf("%d",&n);
	do{
		sum=sum+2*i;
		i++;
	}while(i<=n);
	printf("2+4+6....+2n= %d",sum);
	return 0;
}

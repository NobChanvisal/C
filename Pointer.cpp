#include <stdio.h>
int main(){
	int n,i;
	int a[20];//static array
	printf("Input n:");scanf("%d",&n);
	int *b= new int[n];//Dynamic array
	for(i=0; i<n; i++){
		printf("b[%d]: ",i);scanf("%d",&b[i]);
	}
	printf("Output Array\n");
	for(i=0; i<n; i++)
	printf("%5d",b[i]);
	return 0;
}
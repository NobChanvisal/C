#include <stdio.h>
int main(){
	int i,n;
	float *p;
	printf("Input n: ");scanf("%d",&n);
	float *avg = new float[n];
	p=avg;
	for(i=0; i<n; i++){
		printf("avg[%d]=",i);scanf("%f",(p+i));
	}
	printf("Output Array\n");
	for(i=0; i<n; i++)
	printf("%10.2f",avg[i]);
	
	p=&avg[n-1];
	printf("\nOutput reverse array\n");
	for(i=0; i<n; i++)
	printf("%10.2f",*(p-i));
	return 0;
}
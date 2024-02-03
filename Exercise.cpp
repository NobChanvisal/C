
#include <stdio.h>
#include <conio.h>
int main(){
	float use;
	printf("Input use:");scanf("%f",&use);
		if(use<225)
			if(use<210)
				if(use<150)
					printf("Not work");
				else
					printf("Low Voltage");
			else
				printf("Normal");
		else
			printf("Attention");
}
/*#include <stdio.h>
#include <conio.h>
int main(){
	float end,start,pay;
	printf("Input start:");scanf("%f",&start);
	printf("Input end:");scanf("%f",&end);
		if(start<16 && end<=16)
			pay=(end-start)*100;
		if(start>=16 && end>16)
			pay=(end-start)*200;
		if(start<16 && end>16)
			pay=(16-start)*100+(end-16)*200;
	printf("Payment:%.2f",pay);
}
/*#include <stdio.h>
#include <conio.h>
int main(){
	int call;
	float pay;
	printf("Input Call:");scanf("%d",&call);
		if(call>200)
			pay=8+0.06*100+0.04*(call-200);
		else if(call>100)
			pay=8+0.06*(call-100);
		else
			pay=8;
	printf("Call:%d, Payment:%.2f\n",call,pay);	
}
/*#include <stdio.h>
#include <conio.h>
int main(){
	float salary,sale;
	printf("Input sale:");scanf("%f",&sale);
		if(sale>10000)
			salary=0.05*sale+100;
		else
			salary=0.05*sale;
	printf("Salary:%.2f",salary);
	return 0;
}
*/

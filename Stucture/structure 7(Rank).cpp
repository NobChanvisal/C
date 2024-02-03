#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <antheader.h>

struct student{
	float c,cpp,java;
	float avg;
	int rank;
}stu[20],temp;
void line(int n){
	for(int i = 1; i<=n; i++){
		printf("-");
	}
	printf("\n");
}
int main(){
	float s;
	int i,j,n;
	printf("Enter n: ");fflush(stdin);scanf("%d",&n);
	line(50);
	//input data:
	for(i = 0; i<n; i++){
		printf("\nStudent %d :\n",i+1);
		printf("C programming : ");scanf("%f",&stu[i].c);
		printf("C++           : ");scanf("%f",&stu[i].cpp);
		printf("Java          : ");scanf("%f",&stu[i].java);
		
	stu[i].avg = ((stu[i].c + stu[i].cpp + stu[i].java)/3);
	}
	line(50);
	//sort:
	for(i = 0; i<n-1; i++)
		for(j = i+1; j<n; j++)
		if(stu[i].avg < stu[j].avg){
			temp   = stu[i];
			stu[i] = stu[j];
			stu[j] = temp;
		}
	rank:
	int k = 1,count = 0;
	stu[0].rank = k;
	for(i = 0; i<n-1; i++)
	{
		count++;
		if(stu[i].avg == stu[i+1].avg)
			stu[i+1].rank = k;
		else{
			stu[i+1].rank = count + 1;
			k = count + 1;
		}
	}
	printf("\nOutput Data\n");
	line(50);
	for(i = 0; i<n; i++){
		printf("%-10.2f %-10.2f %-10.2f %-10.2f %-10d\n",stu[i].c,stu[i].cpp,stu[i].java,stu[i].avg,stu[i].rank);
	}
	line(50);
	getch();
	return 0;	
}
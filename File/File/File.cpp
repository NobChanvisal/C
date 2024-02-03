#include <stdio.h>
#include <stdlib.h>
/*int main()
{
	FILE *fp;
	char id[20],name[20];

	fp = fopen("C:\\Users\\DELL\\Desktop\\Dev++\\File.txt","a");//create file
	printf("Enter id   : ");fflush(stdin);gets(id);
	printf("Enter name : ");fflush(stdin);gets(name);
	
	//fprintf --> send data to file
	fprintf(fp, "%-12s %-12s\n",id,name);
	fclose(fp);
}
*/
int main(){
	FILE *fp;
	char c;
	fp = fopen("D:\\Dev++\\File1.txt","r");
	if(fp == NULL){
		printf("Can not open file\n");
		exit(1);
	}

	while(1){
		c = fgetc(fp);
		if(feof(fp))
			break;
			printf("%c",c);
	}
	fclose(fp);
}
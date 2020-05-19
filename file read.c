//wap to read data character wise from file
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("neha.txt","r");
	if(fp==NULL)
	{
		printf("file can,t open");
		exit(0);
	}
	while(ch!=EOF)
	{
		ch=fgetc(fp);
		putchar(ch);
	}
	fclose(fp);
	getch();
}

//wap to write a text file
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("neha.txt","w");
	if(fp==NULL)
	{
		printf("file can't open");
		exit(0);
	}
	printf("\n enter the text file\n");
	while(ch != EOF)
	{ ch = getchar();
		//scanf("%c",&ch);
		fputc(ch,fp);
	}
	fclose(fp);
	getch();
}

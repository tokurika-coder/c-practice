//wap to read text from fileand count no of vowels consonants and blank spaces in file
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	int vowel=0,consonant=0,blank=0;
	fp=fopen("neha.txt","r");
	if(fp==NULL)
{
	printf("file cant open");
	exit(0);
}
while(ch!=EOF)
{
	ch=fgetc(fp);
	putchar(ch);
}
if(ch=='a'||ch=='i'||ch=='o'||ch=='u'||ch=='e')
vowel++;
else if(" ")
blank++;
else
consonant++;
fclose(fp);
getch();
}

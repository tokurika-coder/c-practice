//wap to count the no of vowels consonant and blank spaces in a given string
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i=0,vowel=0,consonant=0,blank=0;
	printf("enter a string:");
	gets(str);
	while(str[i]!=0)
	{
		if(str[i]=='a'||str[i]=='o'||str[i]=='u'||str[i]=='e'||str[i]=='i')
		vowel++;
		else if(str[i]==' ')
		blank++;
		else
		consonant++;
		i++;
	}
	str[i]='\0';
	printf("\n vowel=%d, consonant=%d, blank spaces=%d",vowel,consonant,blank);
	getch();
}

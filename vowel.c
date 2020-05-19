//wap to check wheather a given letter is vowel or consonant
#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	printf("vowel");
	else 
	printf("consonant");
	return 0;
}

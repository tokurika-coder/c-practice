//wap to check wheather a given character is vowel or consonant using switch statement
#include<stdio.h>
int main()
{
	char ch;
	printf("enter the value of ch");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
	case 'o':
		case'u':
			printf("vowel");
			break;
			default:
				printf("consonant");
	}
	return 0;
}

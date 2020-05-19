//wap of arithmatic calculater by switch statement
#include<stdio.h>
int main()
{
	char ch;
	int a,b;
	float c;
	printf("'+' for addition\n'-'for substraction\n'*'for multiplication\n'/'for division\n'%%'for remainder");
	printf("\nenter two no a and b");
	scanf("%d%d",&a,&b);
	printf("\nenter the value of ch");
	fflush(stdin);//clear input buffer
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':
			c=a+b;
			break;
			case '-':
				c=a-b;
				break;
				case '*':
					c=a*b;
					break;
					case '/':
						c=a/b;
						break;
						case '%':
							c=a%b;
							break;
							defalut:
								printf("wrong input");
								getch();
								return 0;
	}
	printf("%.2f",c);
	return 0;
}

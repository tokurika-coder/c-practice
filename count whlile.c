//wap to print first 30 even no
#include<stdio.h>
int main()
{
	int count =1,even=0;
	while(count<=30)
	{
		printf("%d\t%d\n",count,even);
 count++;  even+=2;
	}
	getch();
}

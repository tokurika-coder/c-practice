//wap of count with for
#include<stdio.h>
int main()
{
	int count,even;
	for(count=1,even=0;count<=30;count++,even+=2)
		printf("%d\t%d\n",count,even);
	getch();
}

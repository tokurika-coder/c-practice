//wap of static class
#include<stdio.h>
void count();
int main()
{
	count();
	count();
	count();
	count();
	getch();
}
void count()
{
	static int i;
	printf("\n i=%d",i);
	i++;
}

//wap to print all the tables between 10 to 15
#include<stdio.h>
int main()
{
	int i=10,j=1;
	while(i<=15)
	{
		while(j<=10)
		{
			printf("%d*%d=%d\n\t\n",i,j,i*j);
			j++;
		}
		j=1; i++;
	}
	getch();
}

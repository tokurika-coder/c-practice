//wap to print all no from 10 to 100 except multiple of 3
#include<stdio.h>
int main()
{
int i;
for(i=10;i<=100;i++)
{
	if(i%3==0)
	continue;
	printf("%d\t",i);
}
return 0;
}

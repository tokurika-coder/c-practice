//wap to calculate the biggeset no between three no
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any three no");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	if(a>c)
	printf("%d id big",a);
	else
	printf("%d is big",c);
	else
	if(b>c)
	printf("%d is big",b);
	else
	printf("%d is big",c);
	return 0;
}

//write a program to perform addition ,substraction,division ,multiplication ,modulus on two integers
#include<stdio.h>
int main()
{
	int a,b,add,mul,sub,div,modu;
	printf("enter the first num,second num");
	scanf("%d%d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	modu=a%b;
	printf("\nadditon=%d\nsubstraction=%d\nmultipication=%d\ndivision=%d\nmodulus=%d",add,sub,mul,div,modu);
	return 0;
}

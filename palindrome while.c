//wap to check wheather a given no is palindrome or not
#include<stdio.h>
int main()
{
	int n,rem,rev=0,n1;
	printf("\nenter the value of n");
	scanf("%d",&n);
	n1=n;
	for( ;n>0;n/=10)
	{
		rem=n%10;
		rev=rev*10+rem;
		}
	if(n1==rev)
	printf("\npalindrome");
	else
	printf("\nnot palindrome");
	return 0;
}

//wap to find the second large no in an array
#include<stdio.h>
int main()
{
	int i,a[20],large,secondlarge,n;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("\n enter the elements of an array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	large=a[0]; 
	for(i=1;i<n;i++)
	{
		if(a[i]>large)
		large=a[i];
	}
	printf("\nthe largest no is %d",large);
	secondlarge = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>secondlarge && a[i]<large)
		secondlarge=a[i];
	}
	printf("\nsecond large no is %d",secondlarge);
	getch();
	}

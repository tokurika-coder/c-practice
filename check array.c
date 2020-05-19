//wap to check a given no n exist in the list of elements or not
#include<stdio.h>
int main()
{
	int i,n,no,a[20],found=0;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("\nenter the no of elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\nenter the no to check");
	scanf("%d",&no);
	for(i=0;i<n;i++)
	{
		if(a[i]==no)
		{
		found=1;
		break;
		}
	}
	if(found==1)
	printf("%d exist",no);
	else
	printf("%d not exist",no);
	getch();
}

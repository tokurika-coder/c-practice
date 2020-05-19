//wap to sort an array
#include<stdio.h>
int main()
{
	int i,j,a[20],temp,n;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("\nenter the elements of array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	}
	printf("\n the sorted array elements are");
	for(i=0;i<n;i++)
	printf("\t%d",a[i]);
	getch();
}

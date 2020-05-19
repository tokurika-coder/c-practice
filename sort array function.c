//wap to sort the elements of array using function
#include<stdio.h>
int sort(int[],int);
int main()
{
	int arr[20],i,j,n;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("\n enter the elements of array");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("\n the sorted array is %d",sort(arr,n));
	getch();
}
int sort(int a[],int n)
{
	int i,j,temp;
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
	for(i=0;i<n;i++)
	printf("\t%d",a[i]);
}

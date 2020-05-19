//wap to add all the elements of array using function
#include<stdio.h>
int addarr(int[],int);
int main()
{
	int arr[20],i;
	printf("enter the elements of array");
	for(i=0;i<10;i++)
	scanf("%d",&arr[i]);
	printf("array sum=%d",addarr(arr,10));
	getch();
}
int addarr(int a[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
		sum+=a[i];
	return sum;
}

//wap to interchange the largest and smallest no of an array
#include<stdio.h>
int main()
{
	int i,small,large,a[20],smallpos,largepos,n,temp;
printf("enter the value of n");
scanf("%d",&n);
printf("\n enter the array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
small=a[0]; smallpos=0;  large=a[0];  largepos=0;
for(i=1;i<n;i++)
{
	if(a[i]<small)
	{
		small=a[i];
		smallpos=i;
	}
}
printf("\nthe smallest no is %d",small);
printf("\nthe position of smallest no is %d",smallpos);
for(i=1;i<n;i++)
{
	if(a[i]>large)
	{
	large=a[i];
	largepos=i;
	}
}
printf("\nthe largest no is %d",large);
printf("\nthe position of largest no is %d",largepos);
temp=a[smallpos];
a[smallpos]=a[largepos];
a[largepos]=temp;
printf("\nthe new array is");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
getch();
}

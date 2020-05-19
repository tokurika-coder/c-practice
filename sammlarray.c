//wap to print the smallestr no and the position of that no in array
#include<stdio.h>
int main()
{
	int i,small,a[20],n,pos;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("\nenter the elemnts of array");
	for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     small=a[0];  pos=0;
     for(i=1;i<n;i++)
     {
     	if(a[i]<small)
     	{
     	small=a[i];
     	pos=i;
		 }
	 }
	 printf("\nthe samllest no is %d",small);
	 printf("\nthe location of smallest no is %d",pos);
getch();
}

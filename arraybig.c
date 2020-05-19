//wap to calculate bigger no in array
#include<stdio.h>
int main()
{
	int i,m[20],big,n;
		printf("enter the no of marks");
		scanf("%d",&n);
		printf("\n enter marks:\n");
		for(i=0;i<n;i++)
		scanf("%d",&m[i]);
		big=m[0];
		for(i=1;i<n;i++)
		if(m[i]>big)
		big=m[i];
		printf("\n big value is %d",big);
		getch();
}


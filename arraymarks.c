//wap to calculate the total marks of a student in 8 subjects
#include<stdio.h>
int main()
{
	int m[10],sum=0,i;
	printf("enter the marks:");
	for(i=0;i<8;i++)
	{
		printf("\nenter the marks of subject %d",i+1);
		scanf("%d",&m[i]);
		sum+=m[i];
	}
	printf("sum=%d",sum);
	getch();
}


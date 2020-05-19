//wap of array of structure input
#include<stdio.h>
struct student
{
	unsigned int roll;
	char name[10];
	char course[10];
	float perc;
};
int main()
{
	struct student st[15];
	int i,n;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter the details of student :%d",i+1);
		scanf("%u %s %s %f",&st[i].roll,st[i].name,st[i].course,&st[i].perc);
	}
	for(i=0;i<n;i++)
	printf("%3d. %5u %-20s %-20s %6.2f\n",i+1,st[i].roll,st[i].name,st[i].course,st[i].perc);
getch();	
}

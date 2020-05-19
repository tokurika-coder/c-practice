//wap to enter the details of student
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
	struct student st1={45,"neha","b.tech",87.00},st2;
	printf("enter the detail of student 2,roll no,name,course,percentage");
	scanf("%u %s %s %f",&st2.roll,&st2.name,&st2.course,&st2.perc);
	printf("\n the details of student 1");
	printf("\n roll no is :%u\n name is :%s\n course is:%s\nperc is:%.2f",st1.roll,st1.name,st1.course,st1.perc);
	printf("\n the details of student 2");
	printf("\n roll no is:%u\n name is:%s\n course is :%s\n perc is:%.2f",st2.roll,st2.name,st2.course,st2.perc);
	getch();
}

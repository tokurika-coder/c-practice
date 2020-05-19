//wap of nesting structure
#include<stdio.h>
struct date
{
	int dd;
	int mm;
	int yy;
};
struct student
{
	unsigned int roll;
	char name[10];
	struct date dob;
};
int main()
{
	struct student st1={23,"neha",13,10,1999},st2;
	printf("enter the details of student 2");
	scanf("%u %s",&st2.roll,&st2.name);
	scanf("%d%d%d",&st2.dob.dd,&st2.dob.mm,&st2.dob.yy);
	printf("\n details of student 1 is");
	printf("\n roll no is:%u\n name is:%s\n dob is:%d-%d-%d",st1.roll,st1.name,st1.dob.dd,st1.dob.mm,st1.dob.yy);
	printf("\n details of student 2 is");
	printf("\n roll no is:%u\nname is:%s\ndob is:%d-%d-%d",st2.roll,st2.name,st2.dob.dd,st2.dob.mm,st2.dob.yy);
	getch();
}

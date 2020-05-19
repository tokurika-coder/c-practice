//calculate the result of a student by taking the marks of three subjects assume that each subject is of 100 marks
//calculate percentage and print result in grade as per the following rule
/*if percentage>=60-first division
if percentage >=50-second division 
if pecentage>=40-third division
if percentage<40-fail*/
#include<stdio.h>
int main()
{
	int a,b,c;
	float per;
	printf("enter the value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	per=(a+b+(float)c)/300*100;
	printf("percentage=%.2f",per);
	if(per>=60)
	printf("\nfirst division");
	else if(per>=50)
	printf("\nsecond division");
	else if(per>=40)
	printf("\nthird division");
	else
	printf("\nfail");
	return 0;
}

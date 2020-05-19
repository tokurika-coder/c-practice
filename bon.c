//write a program for bonous
#include<stdio.h>
int main()
{
	float salary,bon,amtpaid;
	char ch;
	printf("enter the salary");
	scanf("%.2f",&salary);
	printf("enter the sex of worker");
	scanf("%c", &ch);
	if(ch=='m')
	bon=0.05*salary;
	else
	bon=0.10*salary;
	if(salary<10000)
bon+=0.02*salary;
amtpaid=salary+bon;
printf("\namont paid=%.2f",amtpaid);
return 0;
}


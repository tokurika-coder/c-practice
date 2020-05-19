//wap of percentage using logical operater
#include<stdio.h>
int main()
{
	float per;
	printf("enter percentage");
	scanf("%f",&per);
	if(per>=60)
	printf("first division");
	else if(per<50&&per>40)
	printf("third division");
	else if(per<60&&per>50)
	printf("second division");
	else
	printf("fail");
	return 0;
}

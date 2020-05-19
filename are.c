#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	float s,area,c;
	printf("enter the three sides of triangle");
	scanf("%d%d%f",&a,&b,&c);
	s=(a+b+c)/2;
	printf("primeter=%.2f",s);
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area=%.2f",area);
	return 0;
}

//wap to find the area of a triangle using function
#include<stdio.h>
#include<math.h>
float area(int,int,float,float);
int main()
{
	int a,b;
	float s,c,ar;
	printf("enter the value of a ,b,c");
	scanf("%d%d%f",&a,&b,&c);
	ar=area(a,b,c,s);
	printf("\n the area of circle =%.2f",ar);
	getch();
}
float area(int a,int b,float c,float s)
{
	float area;
	s=(a+b+c)/2;
	printf("\n%.2f",s);
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	return area;
}

//write a program to calculate the distance between two points
#include<stdio.h>
#include<math.h>
int main()
{
	int x1,y1,x2,y2;
	float distance;
	printf("enter the value of first point ");
	scanf("%d%d",&x1,&y1);
	printf("enter the value of second point");
	scanf("%d%d",&x2,&y2);
	distance=sqrt(pow((x2-x1), 2)+pow((y2-y1), 2));
	printf("%f",distance);
	return 0;
	}

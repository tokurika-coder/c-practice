//wap to count first 50 odd no using function
#include<stdio.h>
void oddno(int);
int main()
{
	int n=1;
	oddno(n);
	getch();
 } 
 void oddno(int n)
 {
 	int count=1;
 	while(count<50)
 	{
 		if(n%2==1)
 		printf("%d\t",n);
 		count++; n+=2;
 	}
 }

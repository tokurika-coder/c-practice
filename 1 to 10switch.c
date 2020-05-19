//wap that accepts a no from 1 to 10 print whether the no is even or odd using switch
#include<stdio.h>
int main()
{
	int a;
	printf("enter any no");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 9: printf("odd no");
					break;
					case 2:
					case 4:
					case 6:
					case 10:
					case 8:
					printf("even no");
						}	
						return 0;
						}


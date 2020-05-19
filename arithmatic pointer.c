//wap to perform the arithmatic operation on pointer
#include<stdio.h>
int main()
{
    int arr[]={10,23,45,67,24,567,356,256,90};
	int *ptr;
	ptr=&arr[2];
	printf("the address of second location of array is:%u",ptr);
	printf("\n the value of 3rd element is:%d",*ptr);
	ptr++;
	printf("\nthe value of 4th element is:%d",*ptr);
	ptr+=3;
	printf("\n the value of 7th element is:%d",*ptr);
	ptr+=3;
	printf("\n the value of 10 th element is:%d",*ptr);
	ptr-=7;
	printf("\n the value of 3rd element is:%d",*ptr);
	getch();
}

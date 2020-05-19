//wap to sort names of students
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n;
	char str[30][30],temp[30][30];
	printf("enter the value of n");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
     	if(str[i]!=0)
     	strcmp(str[i],str[i+1]);
     	for(j=0;j<n-1-i;j++)
     	{
          if(str[j]>str[j+1])
          {
          temp[j]=str[j];
          str[j]=str[j+1];
          str[j+1]=temp[j];
      }
	}
	 }
	 printf("\nthe sorted name is:");
	 for(i=0;i<n;i++)
	 printf("\n %s",str1[i]);
	 getch();
}

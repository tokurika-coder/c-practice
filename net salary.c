//wap to calculate net salary of an organisation
#include<stdio.h>
int main()
{
	float bs,ns,da,hra;
	printf("enter the basic salary ");
	scanf("%f",&bs);
	if(bs>20000)
	{
	hra=0.55*bs;
	da=0.40*bs;
	}
	else if(bs>15000)
	{
	hra=0.50*bs;
	da=0.35*bs;
	}
	else if(bs>10000)
	{
	hra=0.45*bs;
	da=0.30*bs;
	}
	else if(bs>8000)
	{
	hra=0.40*bs;
	da=0.25*bs;
	}
	else
	{
	hra=5000*bs;
	da=2500*bs;
	}
	printf("hra=%.2f\nda=%.2f",hra,da);
	printf("\n********");
ns=bs+da+hra;
printf("net salary=%.2f",ns);
return 0;
}

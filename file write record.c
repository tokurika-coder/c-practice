//wap to write record
#include<stdio.h>
#include<stdlib.h>
struct student
{
	unsigned roll;
	char nm[10];
	char class[10];
};
int main()
{
	FILE *fp;
	char ch;
	struct student st;
	fp=fopen("neha.txt","w");
	if(fp==NULL)
	{
		printf("file cant open");
		exit(0);
	}
	do
	{
		printf("enter the detail of student roll no,name,class");
		scanf("\n %u%s%s",&st.roll,st.nm,st.class);
		fprintf(fp,"%u%s%s",st.roll,st.nm,st.class);
		printf("\n do you add more(y/n):");
		ch=getche();
	}while(ch=='y');
	fclose(fp);
	getch();
}

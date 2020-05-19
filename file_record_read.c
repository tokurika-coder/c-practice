//wap to read record from text file
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
	struct student st;
	fp=fopen("neha.txt","r");
	if(fp==NULL)
	{
		printf("file cant open");
		exit(0);
	}
		
	while(fscanf(fp,"%u%s%s",&st.roll,st.nm,st.class)!=EOF)
	{
        printf("\nthe detail of student is:\n");
	
	   	printf("\n rollno :%u\n name:%s\n class:%s\n",st.roll,st.nm,st.class);
	}
	fclose(fp);
	getch();
}

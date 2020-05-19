 //wap of extern
 #include<stdio.h>
 void count();
 int main()
 {
 	extern int i;
 	printf("\n i=%d",i);
 	i++;
 //	printf("\n i=%d",i);
 	count();
 	count();
 //	printf("\n i=%d",i);
 	getch();
 }
 void count()
 {
 	extern int i;
 	printf("\n i=%d",i);
    i++;
 }
 int i=10;

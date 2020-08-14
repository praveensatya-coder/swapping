#include<stdio.h>
int main()
{
	int a,b,c;
printf("entera:");
scanf("%d",&a);
printf("enterb:");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("after swapping a:%d",a);
printf("after swapping b:%d",b);
return 0;
}

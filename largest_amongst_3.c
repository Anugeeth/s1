#include<stdio.h>
void main(){
int a,b,c;
printf("Enter 3 numbers");
scanf("%d %d %d",&a,&b,&c);
if(a>b)
 if(a>c)
	printf("%d is the greatest", a);
if(b>a)
 if(b>c)
	printf("%d is the greatest", b);
else
	printf("%d is the greatest", c);
}

#include <stdio.h>
#include <conio.h>
#include <math.h>
void main () 
{
int a,b,c,A,s;
float res;
printf("enter first side of triangle\n");
scanf("%d",&a);
printf("enter second side of triangle\n");
scanf("%d",&b);
printf("enter the third number\n");
scanf("%d",&c);
s=(a+b+c)/2;
A=(s*(s-a)*(s-b)*(s-c));
res=(float)sqrt(A);
printf("the are of triangle is :%f",res);
getch();
}
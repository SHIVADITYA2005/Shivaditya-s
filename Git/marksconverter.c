# include <stdio.h>

 #include <conio.h>

 int main () {

 int a,b,c,i,markscut, finalmarks;

 float flow;

 printf("enter your marks: \n");

 scanf("%d",&a);

 printf("enter marks which you want to get converted: \n");

 scanf("%d",&i);

 markscut = 30 -a;

 flow = (float)30/i;

 c=markscut/flow;

 finalmarks=i-c;

 printf("your marks are: %d", finalmarks);

 return 0;

 }
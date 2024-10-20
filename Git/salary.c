#include <stdio.h>
#include <conio.h>
int main()
{
    int basic,d1,h,d2;
    int gross;
    printf("Enter the basic salery:");
    scanf("%d",&basic);
    d1=0.3*basic;
    h=0.25*basic;
    d2=0.14*basic;
    gross=basic+h+d1+d2;
    printf("The gross salery is %d",gross);
    return 0;
}
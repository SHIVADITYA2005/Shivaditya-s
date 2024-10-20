#include <stdio.h>
#include <conio.h>
int main()
{
    int p,t,s;
    float r,h;
    printf("Enter the principle value:");
    scanf("%d",&p);
    printf("\nEnter the rate:");
    scanf("%d",&r);
    printf("\nEnter the time:");
    scanf("%d",&t);
    s=(p*r*t)/100;
    h=p+s;
    printf("\nThe total number %f",h);
    return 0;
}
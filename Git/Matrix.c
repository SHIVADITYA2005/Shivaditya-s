#include <stdio.h>
#include <conio.h>
void mat()
{
    int n,m;
    printf("Enter the value of 2x2");
    scanf("%d%d",&n,&m);
    int a[2][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j;j<m;j++)
        {
            printf("%dt",a[i][j]);
        }
        printf("\n");
    }
}
void main()
{
    mat();
    getch();
}
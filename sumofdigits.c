#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0,m;
    printf("enter the no:");
    scanf("%d",&n);
do
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }while(n>0);
    printf("sum=%d",sum);
    getch();
}

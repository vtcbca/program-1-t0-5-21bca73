#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    int n;
    int sum=0;
    clrscr();
    
    printf("enter the number");
    scanf("%d",&n);
    
    for(a=1;a<=n;a++)
{

    sum=sum+a;
}

    printf("sumition is %d",sum);
    getch();
}
    
    
    
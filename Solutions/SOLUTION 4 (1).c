#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,a=0,i=0;
    clrscr();
    printf("Enter the number");
    scanf("%d",&n);
    a=n;
    while(n!=0)
 {
    r=n%10;
    i=(i*10)+r;
    n=n/10;
 }
    
    if(a==i)
       
      printf("Enter number is palidrom");
    
    else

      printf("Enter number is not palidrom");
    
    getch();
  }
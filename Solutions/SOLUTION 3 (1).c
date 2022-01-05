#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a=0,sum=0,r;
    clrscr();
    printf("Enter a number");
    scanf("%d",&n);
    a=n;
    
    while(n!=0)
{


        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
        
    if(a=sum)
       
         printf("The Number is Armstrong");
        
    else

         printf("The Number is not Armstrong");
        
    getch();
 }
}
        
     

 
 
    
    
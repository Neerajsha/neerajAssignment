#include<stdio.h>
#include<conio.h>
int main(){
    int i,n,sum =0;
    printf("This is a program to calculate sum of first even natural numbers.\n");
    printf("Enter end range: ");
    scanf("%d",&n);
    n*=2;
    for (i=n;i>=1;i-=2)
    {
        sum =sum +i;
    }
    printf("Total is %d",sum);
    getch();
}
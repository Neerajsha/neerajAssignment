#include<stdio.h>
#include<conio.h>
int main(){
    int i,n,sum =0;
    printf("This is a program to calculate sum of natural numbers.\n");
    printf("Enter end range: ");
    scanf("%d",&n);
    for (i=n;i>=1;i--)
    {
        sum =sum +i;
    }
    printf("%d",sum);
    getch();
}
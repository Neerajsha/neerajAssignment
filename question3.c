#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,sum=0;
    printf("Enter range to sum of odd natural numbers: ");
    scanf("%d",n);
    n*=2;
    n-=1;
    for (i=n;i>=1;i-=2)
    {
        sum=sum+i;
    }
    printf("sum is %d",sum);
    getch();
    
}
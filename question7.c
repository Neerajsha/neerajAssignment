#include<stdio.h>
#include<conio.h>
int main(){
    int n,count=0;
    printf("Enter number: ");
    scanf("%d",&n);

    while (n)
    {
        n = n/10;
        count++;
    }
    printf("number of digit is %d",count);
    
}
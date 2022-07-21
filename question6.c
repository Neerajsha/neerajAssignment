#include<stdio.h>
#include<conio.h>
int main(){
    int i,fact=1;
    printf("Enter factorial number: ");
    scanf("%d",&i);
    while(i>=1){
        fact=fact*i;
        i--;
    }
    printf("The factorial of entered number is %d",fact);
    getch();
}
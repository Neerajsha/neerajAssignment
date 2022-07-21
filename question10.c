#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,reminder,reverse;
    printf("Enter the number: ");
    scanf("%d",&n);

    while (n != 0)
    {
        reminder = n%10;
        n=n/10;
        reverse = reverse*10 + reminder;
    }
    
    printf("Reverse is %d",reverse);
    getch();
}
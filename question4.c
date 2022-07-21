#include<stdio.h>
#include<conio.h>
int main(){
    int i=1,lines,square,sum=0;
    printf("Enter number of sqaure:- ");
    scanf("%d",&lines);
    while (i<=lines)
    {
        square=i*i;
        printf("\nThe squares are %d",square);
        sum=sum+square;
        i++;
    }
    printf("\n\nsum of squares is %d",sum);
    getch();
    
}
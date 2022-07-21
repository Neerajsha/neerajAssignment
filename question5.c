#include<stdio.h>
#include<conio.h>
int main(){
    int i=1,lines,square,sum=0;
    printf("Enter number of cubes:- ");
    scanf("%d",&lines);
    while (i<=lines)
    {
        square=i*i*i;
        printf("\nThe cubes are %d",square);
        sum=sum+square;
        i++;
    }
    printf("\n\nsum of cubes is %d",sum);
    getch();
}
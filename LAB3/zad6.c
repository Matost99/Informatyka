#include<stdio.h>
int main()
{
    int a;
    printf("Podaj rok:\n");
    scanf("%d",&a);
    if (a%400==0){
        printf("To jest rok przestępny.\n");
    }
    else if (a%4==0 && a%100!=0){
        printf("To jest rok przestępny.\n");
    }
    else {
        printf("To nie jest rok przestępny.\n");
    }

}
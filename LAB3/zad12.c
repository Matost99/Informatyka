#include<stdio.h>
int main()
{
    int a;
    printf("Podaj liczbę:\n");
    scanf("%d", &a);
    if(a%2==0){
        printf("Pierwszą liczbą która dzieli jest 2\n");
    }
    else if(a%3==0){
        printf("Pierwszą liczbą która dzieli jest 3\n");
    }
    else if(a%4==0){
        printf("Pierwszą liczbą która dzieli jest 4\n");
    }
    else if(a%5==0){
        printf("Pierwszą liczbą która dzieli jest 5\n");
    }
    else if(a%6==0){
        printf("Pierwszą liczbą która dzieli jest 6\n");
    }
    else{
        printf("Liczba nie jest podzielna przez liczby w zakresie 2-6\n");
    }
   
}
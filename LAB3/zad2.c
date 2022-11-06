#include <stdio.h>
int main()
{
    int a,b;
    int suma,roznica,mnozenie;
    int dzielenie,reszta;
    suma = a+b;
    roznica = a-b;
    mnozenie = a*b;
    dzielenie = a/b;
    reszta = a%b;
    printf("Podaj dwie liczby:");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Wynik dodawania to:%i\n", suma);
    printf("Wynik odejmowania to:%i\n", roznica);
    printf("Wynik mnożenia to:%i\n",mnozenie);
    printf("Wynik dzielenia to:%d\n",dzielenie);
    printf("Reszta z dzielenia to:%d\n",reszta);
    
    return 0;
}
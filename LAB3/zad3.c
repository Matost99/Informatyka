#include <stdio.h>
int main()
{
    int a,b;
    printf("Podaj dwie liczby:");
    scanf("%d %d", &a,&b);
    if (a < b) {
        printf("Większa jest liczba %d\n",b);
    } else {
        printf("Większa jest liczba %d\n",a);
    }
    return 0;
}
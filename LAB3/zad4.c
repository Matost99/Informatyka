#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Podaj 3 liczby:\n");
    scanf("%d %d %d", &a,&b,&c);
    if (a>b && a>c) {
        printf("Największa jest liczba %d\n",a);
    }
    else if (b>a && b>c) {
        printf("Największa jest liczba %d\n",b);
    }
    else if (c>a && c>b) {
       printf("Największa jest liczba %d\n",c);
    }




}
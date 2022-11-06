#include<stdio.h>
int main()
{
    int x1,x2,y1,y2;
    printf("Podaj współrzędne pierwszego wierzchołka:\n");
    scanf("%d %d", &x1,&y1);
    printf("Podaj współrzędne drugiego wierzchołka:\n");
    scanf("%d %d", &x2,&y2);
    int a = x1-x2;
    int b = y1-y2;
    if(a<0) {
        a *= -1;
    }    
    if(b<0) {
        b *= -1;
    }
    int Obwod = 2*(a+b);
    int Pole = a*b;
    printf("Pole wynosi:%d\n", Pole);
    printf("Obwód wynosi:%d\n", Obwod);     
}
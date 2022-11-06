#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Podaj 3 długości odcinków:\n");
    scanf("%d %d %d", &a,&b,&c);
    if (a>b && a>c){
        if (b*b + c*c == a*a){
            printf("Można zrobić trójkąt prostokątny.\n");
        }
    }
    else if (b>a && b>c){
        if (a*a + c*c == b*b){
            printf("Można zrobić trójkąt prostokątny.\n");
        }
    }
    else if (c>b && c>a){
        if (b*b + a*a == c*c){
            printf("Można zrobić trójkąt prostokątny.\n");
        }
    }
    else{
            printf("Nie można zrobić trójkąta prostokątnego.\n");
    }
}
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Podaj 3 długości odcinków:\n");
    scanf("%d %d %d", &a,&b,&c);
    if (a<0 || b<0 || c<0){
        printf("Niepoprawna długość odcinka (musi być większa niż 1).\n");
    }
    if (a+b<c){
        printf("Nie da się zrobić trójkąta.\n");
    }
    else if (a+c<b){
        printf("Nie da się zrobić trójkąta.\n");
    }
    else if (b+c<a){
        printf("Nie da się zrobić trójkąta.\n");
    }
    else {
        printf("Z tych odcinków może powstać trójkąt.\n");
    }

}
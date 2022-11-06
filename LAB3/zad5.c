#include<stdio.h>
int main()
{
    int a;
    printf("Podaj znak ASCII:\n");
    scanf("%d",&a);
    if (a>65 && a<91){
        printf("Ten znak to jest duża litera.\n");
    }
    else if(a>96 && a<123){
        printf("Ten znak to jest mała litera.\n");
    }
    else {
        printf("Ten znak to nie jest litera.\n");
    }

}
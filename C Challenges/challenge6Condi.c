#include <stdio.h>

int main() {


    int num;

    printf("Entrer un nombre :");
    scanf("%d",&num);

    if (num < 0){
        printf("Ce nombre est negatif");
    }
    else if (num > 0){
        printf("Ce Nombre est positif");
    }
    else{
        printf("ce nombre est null");
    }
    

    return 0;
}
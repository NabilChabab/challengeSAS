#include <stdio.h>



int main(){

    int a , b , c , d ;
    int somme ; 
    int moyenne;

    printf("Entrer nombre 1 : ");
    scanf("%d",&a);

    printf("Entrer nombre 2 : ");
    scanf("%d",&b);

    printf("Entrer nombre 3 : ");
    scanf("%d",&c);

    printf("Entrer nombre 4 : ");
    scanf("%d",&d);

    somme = (a+b+c+d);
    moyenne = somme/4;

    printf("La somme est : %d",somme);
    printf("\nLa moyenne est : %d",moyenne);

    return 0 ;
}
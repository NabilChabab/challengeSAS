#include <stdio.h>



int main(){


    int Age;
    char Nom[100];
    char Prenom[100];
    char Sexe[100];
    char Numero[100];
    printf("Entrer le Nom :");
    scanf("%s" , Nom);
    printf("Entrer le Prenom :");
    scanf("%s" , Prenom);
    printf("Entrer le Sexe :");
    scanf("%s" , Sexe);
    printf("Entrer l'age :");
    scanf("%d" , &Age);
    printf("Entrer le Numero de Telephone : +212");
    scanf("%s" , Numero);

    printf("**************************************");


    printf("\nLe Nom est : %s ", Nom);
    printf("\nLe Prenom est : %s ", Prenom);
    printf("\nLe Numero de Telephone est : +212%s ", Numero);
    printf("\nLe Sexe est : %s ", Sexe);
    printf("\nL'age est : %d ans ", Age);


    return 0 ;
}
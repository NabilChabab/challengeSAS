#include <stdio.h>

int main(){

    char voyelle ;

    printf("Entrer un caractere :");
    scanf("%c",&voyelle);

    switch (voyelle)
    {
    case 'a':
        printf("oui a c'est une voyelle");
        break;
    case 'o':
        printf("oui o c'est une voyelle");
        break;    
    case 'y':
        printf("oui y c'est une voyelle");
        break;
    case 'i':
        printf("oui i c'est une voyelle");
        break;
    case 'e':
        printf("oui e c'est une voyelle");
        break;
    case 'u':
        printf("oui u c'est une voyelle");
        break;        
    default:
        printf("rien de ces caractere c'est une voyelle");
        break;
    }
    


    return 0 ;
}
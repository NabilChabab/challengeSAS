#include <stdio.h>

int main(){

    int a , b;

    printf("Entrer la valeur de a :");
    scanf("%d",&a);

    printf("Entrer la valeur de b :");
    scanf("%d",&b);

    if (a==b){

        printf("Le resultat est : %d",(a+b)*3);
    }
    else{
        printf("Le resultat est : %d",a+b);

    }
    
    


    return 0 ;
}
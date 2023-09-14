#include <stdio.h>


int main(){

    char alphabet;

    printf("Donnee un alphabet : ");
    scanf("%c",&alphabet);

    if ((alphabet >=65 && alphabet<=90)){
        printf("c'est un alphabet et Majuscule");
    }
    else if ((alphabet >=97 && alphabet<=122)){
        printf("c'est un alphabet et Miniscule");
    }
    else{
        printf("c'est pas un alphabet");
    }
    
    

    return 0;
}
#include <stdio.h>


int main(){

    char alphabet;

    printf("Donnee un alphabet : ");
    scanf("%c",&alphabet);

    if ((alphabet >=65 && alphabet<=90)){
        printf("c'est un alphabet Majuscule");
    }
    else{
        printf("c'est pas un alphabet Majuscule");
    }
    
    

    return 0;
}
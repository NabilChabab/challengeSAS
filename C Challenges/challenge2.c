#include <stdio.h>



int main(){


    int C , F;

    printf("Entrer la temperature en Fahrenheit :");
    scanf("%d",&F);

    C = (F-32)/1.8;
    printf("La transforme en degre Celsius est : %d",C);

    if (C>=40){
        printf("Donc tres chaud!!!");
    }
    else if (C < 40){
        printf("\nDonc chaud!!!");
    }
    else if (C <= 30){
        printf("\nDonc froid!!!");
    }
    else{
        printf("\nDonc tres froid!!!");
    }
   
    return 0 ;
}
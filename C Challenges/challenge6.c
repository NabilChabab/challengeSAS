#include <stdio.h>

int main(){

    const float pi = 3.14 ;
    float r ;

    printf("Donner le rayon : ");
    scanf("%f",&r);

    printf("La Circonférence du cercle est : %.2f",2*pi*r);
    
    return 0;
}

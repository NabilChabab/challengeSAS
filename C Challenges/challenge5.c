#include <stdio.h>
#include <math.h>

int main(){

    int x1 , x2 ;
    int y1 , y2 ;
    int M , N ;
    int distance;

    printf("Entrer les coordonnees de x1 :");
    scanf("%d",&x1);

    printf("Entrer les coordonnees de x2 :");
    scanf("%d",&x2);

    printf("Entrer les coordonnees de y1 :");
    scanf("%d",&y1);

    printf("Entrer les coordonnees de y2 :");
    scanf("%d",&y2);

    M = x2 - x1 ;
    N = y2 - y1 ;
    distance = sqrt(pow(M , 2) + (N , 2));

    printf("la distance est : %d",distance);

    return 0 ;
}
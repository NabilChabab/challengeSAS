#include <stdio.h>


int main(){

    int n  = 234; //432
    int n1 , n2 , n3 ;
    n1 = n%10;
    n3 = n/100;
    int v = n%100;
    n2 = v/10;
    int resultat = (n1*100) + (n2*10) +n3;
    printf("%d",resultat);

    
    return 0;
}

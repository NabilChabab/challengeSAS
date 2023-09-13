#include <stdio.h>



int main(){


    int a , b;

    printf("Entrer la valeur de a :");
    scanf("%d",&a);

    printf("Entrer la valeur de b :");
    scanf("%d",&b);

   
    printf("\na + b = %2.f" , (float) a+b);
    printf("\na - b = %2.f" , (float) a-b);
    printf("\na * b = %2.f" , (float) a*b);
    printf("\na / b = %2.f" , (float) a/b);
    printf("\na % b = %d" , a%b);
   
    



    return 0 ;
}
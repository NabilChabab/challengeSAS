#include <stdio.h>



int main(){
    

    int n , i , d = 0;

    printf("Entrer un nombre : ");
    scanf("%d",&n);

    for (i = 2 ; i <= (n/2) ; i++){
        if (n%i==0){
            d++;

        }
        if (d == 0){
            printf("premier");
        }
        else
            printf("pas premier");
                    break;

    }
    



    return 0;
}

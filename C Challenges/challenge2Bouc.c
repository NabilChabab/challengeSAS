#include <stdio.h>


int main(){
    
    int li , esp , i;
    printf("Entrer un nembre : ");
    scanf("%d",&li);


    for (i = 1 ; i <= li ; i++){

        for (esp = 1 ; esp <= li-i; esp++){
            printf(" ");
        }
        for (esp = 1 ; esp <= 2*i-1; esp++)
        {
            printf("*");
        }

        printf("\n");
        
        

    }
    

    return 0;
}

#include <stdio.h>

int main(){

    int number ;

    printf("Enter a number : ");
    scanf("%d",&number);


    if (number % 2 == 0){
        printf("se nombre est pair");
    }
    else{
        printf("se nombre est impair");
    }
    


    return 0 ;
}
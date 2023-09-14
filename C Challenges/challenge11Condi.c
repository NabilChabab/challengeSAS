#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    srand(time(NULL));
    
    int num = ((rand() % 7) - 1);


    switch (num)
    {
    case 1:
        printf("lundi",num);
        break;
    case 2:
        printf("mardi",num);
        break;
    case 3:
        printf("mercredi",num);
        break;
    case 4:
        printf("jeudi",num);
        break;
    case 5:
        printf("vendredi",num);
        break;
    case 6:
        printf("samedi",num);
        break;                    
    case 7:
        printf("dimanche",num);
        break;
    
    }
    
    return 0;
}

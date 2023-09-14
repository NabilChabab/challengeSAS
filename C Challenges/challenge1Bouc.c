#include <stdio.h>


int main(){
    
    int i , num = 1;


    for (i = 1 ; i <= 10 ; i++){


        int multi = i*num;

        printf("%d x %d = %d\n",num , i , multi);

    }
    

    return 0;
}

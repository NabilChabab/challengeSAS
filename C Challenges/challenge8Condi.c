#include <stdio.h>


int main(){

   float moyenne;

   printf("Entrer la moyenne : ");
   scanf("%f",&moyenne);

   if (moyenne < 10){
        printf("recale");
   }
   else if (moyenne >= 10 && moyenne<=12){
        printf("passable");
   }
   else if (moyenne > 12  && moyenne<=14){
        printf("assez bien");
   }
   else if (moyenne > 14 && moyenne<=16){
        printf("mention bien");
   }
   else if (moyenne > 16 && moyenne <= 20){
        printf("mention tres bien");
   }


   
   
    
    

    return 0;
}
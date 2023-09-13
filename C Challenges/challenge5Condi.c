#include <stdio.h>
#include <math.h>

int main() {
    
    int annee;
    int mois , jours , heures , min , sec;

    printf("Entrer annee : ");
    scanf("%d",&annee);

    

    char menu;

    printf("1 - Mois : \n");
    printf("2 - jours : \n");
    printf("3 - heures : \n");
    printf("4 - minutes : \n");
    printf("5 - secondes : \n");

    printf("Voici le menu Choisiser un condi : ");
    scanf(" %c",&menu);

    mois = annee*12;
    jours = 365/annee;
    heures = annee*8760;
    min = heures*60;
    sec = min*60;

    switch (menu)
    {
    case '1':
        printf("en mois est :%d",mois);
        break;
    case '2':
        printf("en jours est :%d",jours);
        break;
    case '3':
        printf("en heures est :%d",heures);
        break;
    case '4':
        printf("en minutes est :%d",min);
        break;
    case '5':
        printf("en second est :%d",sec);
        break;                
    }

    return 0;
}
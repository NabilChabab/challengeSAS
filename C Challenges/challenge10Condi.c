#include <stdio.h>

int main() {
    char date[11];
    char mois[12][20] = {
        "Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin",
        "Juillet", "Août", "Septembre", "Octobre", "Novembre", "Decembre"
    };
    int jour, annee;
    int mn;

    printf("Entrez une date au format jj/mm/aaaa : ");
    scanf("%s", date);

    sscanf(date, "%d/%d/%d", &jour, &mn, &annee);

    if (mn >= 1 && mn <= 12) {
        printf("%d-%s-%d\n", jour, mois[mn-1], annee);
    } else {
        printf("Mois invalide.\n");
    }

    return 0;
}
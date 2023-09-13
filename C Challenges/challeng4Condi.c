#include <stdio.h>
#include <math.h>

int main() {
    float a , b, c;
    float delta, x1, x2;


    printf("Entrez la valaur de a : ");
    scanf("%f", &a);
    printf("Entrez la valaur de b : ");
    scanf("%f", &b);
    printf("Entrez la valaur de c : ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Les solutions sont : %f et %f\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("La solution est : %f\n", x1);
    } else {
        printf("Pas de solution réelle.\n");
    }

    return 0;
}
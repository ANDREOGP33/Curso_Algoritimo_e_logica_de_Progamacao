#include <stdio.h>

int main () {

    double nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    media = (double)(nota1 + nota2) / 2;

    if (media < 60) {
        printf("Media: %lf\n", media);
        printf("___REPROVADO___");
    }
    else {
        printf("Media: %lf\n", media);
        printf("___APROVADO___");
    }
return 0 ;    
}
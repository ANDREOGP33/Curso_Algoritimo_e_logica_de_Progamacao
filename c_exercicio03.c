#include <stdio.h>
#include <string.h>


void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    printf("Digite os dados da primeira pessoa:\n");
    printf("Nome: ");
    gets(nome1);
    printf("Idade: ");
    scanf("%i", &idade1);

    printf("Digite os dados da segunda pessoa:\n");
    printf("Nome: ");
    limpar_entrada();
    gets(nome2);
    printf("Idade: ");
    scanf("%i", &idade2);

    media = (idade1 + idade2) / 2.0;

    printf("A idade media entre %s e %s eh de %lf anos", nome1, nome2, media);

    return 0;
}
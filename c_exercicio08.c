#include <stdio.h>

int mais()
{
    int idade, total;
    double media, soma;

    printf("Digite as idades: \n");
    idade = 0;
    total = 0;
    scanf("%d\n", &idade);
    total = total + 1;

    media = 0;
    soma = 0;

    if (idade < 0)
    {
        printf("IMPOSSIVEL CALCULAR");
    }   
    else
    {
        scanf("%d\n",&idade);
        total = total + 1; 
        soma = soma + idade;
    }

    media = soma / total;
    printf("Media das idades: ");
    scanf("%lf", &media);

    return 0;
}
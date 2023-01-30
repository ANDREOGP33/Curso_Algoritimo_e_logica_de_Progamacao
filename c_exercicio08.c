#include <stdio.h>

int main()
{
    int idade, total, soma;
    double media;

    printf("Digite as idades: \n");
    scanf("%d", &idade);
    
    soma = 0;
    total = 0;
    while (idade >= 0)
    {
        soma = soma + idade;
        total = total + 1;
        scanf("%d", &idade);
    }
    
    if (total == 0)
    {
        printf("IMPOSSIVEL CALCULAR");
    }
    else 
    {
        media = (double)soma / total;
        printf("Media = %.2lf", media);
    }

    return 0;
}

# include<stdio.h>

int main()
{
    int x, i;
    double soma, media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &x);

    double vet[x];

    for (i = 0; i < x; i++)
    {
        scanf("%lf", &vet[i]);
    }

    soma = 0;
    for (i = 0; i < x; i++)
    {
        soma = soma + vet[i];
    }

    media = soma / x;

    printf("Valores =");
    for (i = 0; i < x; i++)
    {
        printf("%.1lf ", vet[i]);
    
    }

    printf("\nSoma = %.2lf", soma);
    printf("\nMedia = %.2lf", media);
            
    return 0;
}
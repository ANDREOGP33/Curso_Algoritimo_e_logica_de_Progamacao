#include <stdio.h>

int main()
{
    
    int x, i;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d\n", &x);

    int vet[x];

    for (i = 0; i < x; i++)
    {
        scanf("%d", &vet[i]);
    }

    printf("NEGATIVOS\n");
    for (i = 0; i < x; i++)
    {
        if (vet[i] < 0)
        {
            printf("%d\n", vet[i]);
        }
    }

    return 0;
}
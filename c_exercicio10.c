#include <stdio.h>

int main()
{

    int n1, n2, i, soma;

    printf("Digite dois numeros: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    soma = 0;

    if (n1 < n2)
    {
        for ( i = n1 ; i < n2 ; i++ )
        {
            if ( i % 2 != 0)
            {
                soma = soma + i;
            }
        }
    }
    else
    {
       for ( i = n2 ; i < n1 ; i++ )
        {
            if ( i % 2 != 0)
            {
                soma = soma + i;
            }
        } 
    }

    printf("Soma dos numeros impares: %d", soma);

    return 0;
}
#include <stdio.h>

int main()
{
    int n, m,i ,j, negativo;
    
    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);
    m = n;
    
    int matriz[n][m];
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Elemento; [%d,%d]: ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Diagonal Principal: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", matriz[i][i]);
    }

    negativo = 0;
    printf("Quantidade de negaivo: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (matriz[i][j] < 0)
            {
                negativo = negativo + 1;
            }
        }
    }
    printf("%d", negativo);

    return 0;
}

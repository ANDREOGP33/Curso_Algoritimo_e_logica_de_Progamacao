#include <stdio.h>

int main()
{
    int m, n, i, j;
    
    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &m);
    
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &n);
    
    int matriz[m][n];
    int vetor[m];
    
    for (i = 0; i < m; i++)
    {
        printf("Digite os elementos da %d° linha: \n", i+1);
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (i = 0; i < m; i++)
    {
        vetor[i] = 0;
        for ( j = 0; j < n; j++)
        {
            vetor[i] = vetor[i] + matriz[i][j];
        }
    }
    
    printf("Vetor gerado: \n");
    
    for (i = 0; i < m; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    return 0;
}

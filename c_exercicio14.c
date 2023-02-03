#include <stdio.h>

int main()
{
    int n, m,i ,j;
    
    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);
    m = n;
    
    int vetor[n][m];
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Elemento; [%d,%d]: ", i,j);
            scanf("")
        }
    }

    return 0;
}

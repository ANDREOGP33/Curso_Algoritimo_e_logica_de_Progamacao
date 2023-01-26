#include <stdio.h>

int main()
{
    int n, i, resultado;
    
    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &n);
    
    resultado = 0;
    for (i = 1; i <= 10; i++ )
    {   
        resultado = n * i;
        printf("%d x %d = %d\n", n, i, resultado);
    }

    return 0;
}

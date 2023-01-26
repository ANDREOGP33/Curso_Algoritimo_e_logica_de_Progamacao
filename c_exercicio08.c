#include <stdio.h>

int mais()
{
    int idade, total;
    double media;


    printf("Digite as idades: \n");

    idade = 0;
    total = 0;

    scanf("%d\n", idade);
    total = total + 1;
    
    if (idade < 0) exit(0);
    if (idade >= 0)
    {
        scanf("%d\n", idade);
        total = total + 1;

    }
    else
    {
        
    }


    return 0;
}
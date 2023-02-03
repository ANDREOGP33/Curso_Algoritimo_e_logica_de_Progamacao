# include <stdio.h>

int main()
{
    int n;

    printf("Quantas pessoas vc vai digitar: ");
    scanf("%d", &n);

    int i, idade[n];
    double altura[n];
    char nome[n][50];

    for (i = 0; i < n; i++)
    {
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);
    }

    int idadetotal, m16;

    idadetotal = 0;
    for (i = 0; i < n; i++)
    {
        idadetotal = idadetotal + idade[i];
    }
    
    double media;

    media = idadetotal / n;

    printf("Media das idades: %.2lf\n", media);

    m16 = 0;

    for (i = 0; i < n; i++)
    {
        if (idade[i] < 16)
        {
            m16 = m16 + 1;
            printf("Menores de 16 anos: %s\n", nome[i]);
        }
    }

    double pm16;

    pm16 = (m16 * 100) / n;

    if ( m16 > 0)
    {
        printf("Porcentagem de pessoas menores de 16 anos: %.2lf", pm16);
    }


    return 0;
}
# include <stdio.h>
# include <string.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int n, i, idade[n];
    double altura[n];
    char nome[n];
    
    printf("Quantas pessoas vc vai digitar: ");
    scanf("%d", n);

    for (i = 0; i >= n; i++)
    {
        limpar_entrada();
        fgets(char, nome[i], stdin);
        scanf("%d", &idade[i]);
        scanf("%lf", &altura[i]);
    }


    return 0;
}
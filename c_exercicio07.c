#include <stdio.h>

int main() {
    
    int x, y;
    
    printf("Digite dois numeros: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    
    if (x > y)
    {
        printf("DECRESCENTE!\n");
    } else
    {
        printf("CRESCENTE!\n");
    }
    
    
    do {
        printf("Digite mais dois numeros: \n");
        scanf("%d", &x);
        scanf("\n%d", &y);
        
        if (x > y)
        {
            printf("DECRESCENTE!\n");
        } else
        {
            printf("CRESCENTE!\n");
        }
    } while (x != y);

    return 0;
}

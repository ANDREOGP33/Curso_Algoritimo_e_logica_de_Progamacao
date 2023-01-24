#include <stdio.h>

int main() {
    
    double pv, sv, tv, menor;
    
    printf("Primeiro valor: ");
    scanf("%lf", &pv);
    
    printf("Segundo valor: ");
    scanf("%lf", &sv);
    
    printf("Terceiro valor: ");
    scanf("%lf", &tv);
    
    menor = 0;
    if (pv < sv && pv < tv) {
        menor = pv;
    }
    else if (sv <  pv && sv < tv) {
        menor = sv;
    } else {
        menor = tv;
    }
    
    printf("Menor : %.2lf", menor);
    

    return 0;
}

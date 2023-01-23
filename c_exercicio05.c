#include <stdio.h>
#include <math.h>

 

int main () {

    double a, b, c, delta, x1, x2;
    
    printf("Coeficiente a: ");
    scanf("%lf", &a);
    
    printf("Coeficiente b: ");
    scanf("%lf", &b);
    
    printf("Coeficiente c: ");
    scanf("%lf", &c);
    
    delta =  pow(b, 2) - 4 * a * c;
    x1 = (-b + sqrt(delta)) / 2* a;
    x2 = (-b - sqrt(delta)) / 2* a;
    
    printf("x1: %lf\n", x1);
    printf("x2: %lf", x2);
    
    return 0;
}

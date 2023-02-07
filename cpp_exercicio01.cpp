#include <bits/stdc++.h>

using namespace std;

int main()
{
    double base, altura, perimetro, diagonal, area;
    
    cout << "Base do retangulo: ";
    cin >> base;
    
    cout << "Altura do retangulo: ";
    cin >> altura;
    
    area =  base * altura;
    perimetro = (base * 2) + (altura * 2);
    diagonal = sqrt(pow(base, 2) + pow(altura, 2));
    
    cout << "Area = " << area << endl;
    cout << "Perimetro = " << perimetro << endl;
    cout << "Diagonal = " << diagonal << endl;

    
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n,i;
    double menord16, pm16, alturamed;
    
    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;
    
    string nomes[n];
    int idades[n];
    double alturas[n];
    
    for (i = 0 ; i < n ; i++)
    {
        cout << "Dados da " << i+1 << "° pessoa: \n";
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        cin >> nomes[i];
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    }
    
    alturamed = 0;
    cout << "Altura media: ";
    for (i = 0 ; i < n ; i++)
    {
        alturamed = alturamed +alturas[i];
    }
    alturamed = alturamed / n;
    cout << fixed << setprecision(2);
    cout << alturamed;
    cout << "\n";
    
    int cont = 0;
    for (i = 0 ; i < n ; i++)
    {
        if (idades[i] < 16)
        {
            cont++;
        }
    }
    
    cout << fixed << setprecision(1);
    if (cont > 0)
    {
        pm16 = (cont * 100) / n;
        cout << "Porcentagem de menores de 16 anos: " << pm16 << "%\n";
        cout << "Pessoas menores de 16 anos: \n";
        for (i = 0 ; i < n ; i++)
        {
            if (idades[i] < 16)
            {
                cout << nomes[i];
                cout << "\n";
            }
        }
        
    }
    
return 0;
}
    
    
    
    
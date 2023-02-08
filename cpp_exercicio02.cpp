#include <bits/stdc++.h>


using namespace std;
int main()
{
    int idade1, idade2;
    double media;
    string nome1, nome2;

    cout << "Dados da primeira pessoa: \n";
    cout << "NOME: ";
    cin >> nome1;
    cout << "IDADE: ";
    cin >> idade1;
    cin.ignore(INT_MAX, '\n');
    cout << "Dados da segunda pessoa: \n";
    cout << "NOME: ";
    cin >> nome2;
    cout << "IDADE: ";
    cin >> idade2;

    media = (double) (idade1 + idade2) / 2 ;

    cout  << "A idade media de "  << nome1 << " e " << nome2 << " eh de " << media << " anos.";

 return 0;
}
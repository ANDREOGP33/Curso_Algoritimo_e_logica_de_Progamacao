#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p1, p2, p3, menor;
    
    cout << "Primeiro valor; ";
    cin >> p1;
    
    cout << "Segundo valor: ";
    cin >> p2;
    
    cout << "Terceiro valor: ";
    cin >> p3;
    
    if (p1 < p2 && p1 < p3)
    {
        menor = p1;
    }
    else if (p2 < p1 && p2 < p3)
    {
        menor = p2;
    }
    else
    {
        menor = p3;
    }
    
    cout << "Menor = " << menor;
    
    return 0;
}

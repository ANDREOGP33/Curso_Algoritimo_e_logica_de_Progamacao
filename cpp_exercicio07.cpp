
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Qual a ordem da matriz: ";
    cin >> n;
    
    int cont = 0;
    
    int mat[n][n];
    
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            cout << "Elemento [" << i << ", " << j << "]: ";
            cin >> mat[i] [j];
        }
    }
    
    cout << "Diagonal principal: \n";
    
    for (int i = 0; i < n ; i++)
    {
        cout << mat[i][i] << " ";
    }
    
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            if (mat[i][j] < 0)
            {
                cont = cont + 1;
            }
        }
    }
    
    cout << endl;
    cout << "Quantidade de negativos: " << cont;
    
    
    return 0;
}

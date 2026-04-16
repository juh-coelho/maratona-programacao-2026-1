
#include <bits/stdc++.h>

using namespace std;

int main(){

    int matriz[3][3], somaColunas[3];

    for(int i = 0; i < 3; i++){

        for(int j =0; j < 3; j++){
                cin >> matriz[i][j];
        };


    };

    for(int k = 0; k < 3; k++){

       somaColunas[k] = matriz[0][k] + matriz[1][k] + matriz[2][k];
        
    };

    cout << "Coluna 0: " << somaColunas[0] << endl;
    cout << "Coluna 1: " << somaColunas[1] << endl;
    cout << "Coluna 2: " << somaColunas[2] << endl;


    return 0;
}
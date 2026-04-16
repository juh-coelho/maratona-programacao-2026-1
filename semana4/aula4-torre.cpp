#include <bits/stdc++.h>
using namespace std;

int main(){

    int numero, peso = 0;
    cin >> numero;

    int tabuleiro[numero][numero], linha[numero], coluna[numero];

    for(int i = 0; i < numero; i++){
        for(int j = 0; j < numero; j++){
            cin >> tabuleiro[i][j];
        };
    };

    for(int i = 0; i < numero; i++){
        linha[i] = 0;

        for(int j = 0; j < numero; j++){
            linha[i] += tabuleiro[i][j];
        };
    };

    for(int j = 0; j < numero; j++){
    coluna[j] = 0;

        for(int i = 0; i < numero; i++){
            coluna[j] += tabuleiro[i][j];
        };
    };

    int maior = 0;

    for(int i = 0; i < numero; i++){
        for(int j = 0; j < numero; j++){

            int peso = linha[i] + coluna[j] - 2 * tabuleiro[i][j];

            if(peso > maior){
                maior = peso;
            };
        };
    };

    cout << maior << endl;

    return 0;
}
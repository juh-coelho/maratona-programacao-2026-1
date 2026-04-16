#include <bits/stdc++.h>
using namespace std;

int main(){

    int numero;
    cin >> numero;

    int fita[numero], vetorCores[numero];

    for(int i = 0; i < numero; i++){
        cin >> fita[i];
    }

    // da esquerda → direita
    int ultimaZero = -1000000;

    for(int i = 0; i < numero; i++){
        if(fita[i] == 0){
            ultimaZero = i;
        }
        vetorCores[i] = i - ultimaZero;
    }

    // da direita → esquerda
    ultimaZero = 1000000;

    for(int i = numero - 1; i >= 0; i--){
        if(fita[i] == 0){
            ultimaZero = i;
        }
        vetorCores[i] = min(vetorCores[i], ultimaZero - i);
    }

   
    for(int i = 0; i < numero; i++){
        cout << min(vetorCores[i], 9) << " ";
    }

    return 0;
}
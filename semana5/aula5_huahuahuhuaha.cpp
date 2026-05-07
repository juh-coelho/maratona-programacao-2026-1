#include <bits/stdc++.h>

using namespace std;

int main(){

    string risada;

    getline(cin, risada);

    vector<char> vogais;

    for(int i = 0; i < risada.length(); i++){

        char letra = risada[i];

        if(letra == 'a' || letra == 'e' || letra == 'i' ||
           letra == 'o' || letra == 'u'){

            vogais.push_back(letra);

        };

    };




    char risadaboa = 'S';
    
    for(int i = 0; i < vogais.size(); i++){
     
        if(vogais[i] != vogais[vogais.size() - 1 - i]){
            risadaboa = 'N';
            break;
        };

    };



   cout << risadaboa;
    return 0;
}
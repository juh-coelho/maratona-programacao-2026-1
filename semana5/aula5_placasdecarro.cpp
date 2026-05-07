#include <bits/stdc++.h>

using namespace std;

int main(){

    string placa;

    getline(cin, placa);

    vector<char> letras;

    for(int i = 0; i < placa.length(); i++){

        char letra = placa[i];

        letras.push_back(letra);

    };


    int tipo = 1;
    
    if(letras.size() == 8){
       
        tipo = 1;

       for(int i =0; i< 3; i++){

        
            if(!isupper(letras[i])){
                tipo = 0;
                break;
            };



       };

       if(!letras[3] == '-'){
            tipo = 0;
        };

        for(int i =4; i< 8; i++){

        
            if(!isdigit(letras[i])){
                tipo = 0;
                break;
            };
       };

       
    } else if(letras.size() == 7){

        tipo =2;

       for(int i =0; i< 3; i++){

        
            if(!isupper(letras[i])){
                tipo = 0;
                break;
            };



       };

        
        
            if(!isdigit(letras[3]) || !isupper(letras[4]) || !isdigit(letras[5])  || !isdigit(letras[6])  ){
                tipo = 0;
            
            };

            

       
    } else{
        tipo =0;
    };







    cout << tipo;
    return 0;
}
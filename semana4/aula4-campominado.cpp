
#include <bits/stdc++.h>

using namespace std;

int main(){

    int numero, minas = 0;

    cin >> numero;

    int vetor[numero], vetorMinas[numero];

    for(int i = 0; i < numero; i++){

        
        cin >> vetor[i];
        

    };

    for(int k = 0; k < numero; k++){

      if(vetor[k] == 1){
            minas = minas + 1;
      };

      if(k > 0 && vetor[k-1] == 1){
            minas = minas + 1;
      };

      if(k < numero-1 && vetor[k+1] == 1){
            minas = minas + 1;
      };

        vetorMinas[k] = minas;
        minas = 0; 

    };


    for(int j = 0; j < numero; j++){
        cout << vetorMinas[j] << endl;
    };

  
    return 0;
}

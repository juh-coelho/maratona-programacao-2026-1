
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, i, l = 0, sequencia = 0, pontos = 0, z = 0;
    


    cin >> n;

    do {

        cin >> i;

        if(i == l){
            sequencia = sequencia + 1;

            if(sequencia > pontos){
                pontos = sequencia;
            };

        } else {
            sequencia = 1;
        };
         
        l = i;
        z++;
    } while (z < n);

    cout << pontos << endl;


    return 0;
}
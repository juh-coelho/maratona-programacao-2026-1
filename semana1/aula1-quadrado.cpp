#include <bits/stdc++.h>

using namespace std;
int main() { 
    float a;
 cin >> a;


    if (a < 1 || a > 1000) {
        cout << "Número inválido! Digite entre 1 e 1000." << endl;
         cin >> a;
    } else { 
 float resultado = a * a;
 cout << resultado << endl;
    }
 return 0;
}
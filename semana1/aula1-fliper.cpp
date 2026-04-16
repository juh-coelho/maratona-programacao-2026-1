#include <bits/stdc++.h>
using namespace std;

int main() { 
    int p, r;      
    char resultado;

    cin >> p >> r; 

    if(p == 0) {
        resultado = 'C'; 
    } else if (p == 1 && r == 0){
        resultado = 'B';
    } else {
        resultado = 'A';
    }

    cout << resultado << endl;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, t, qp = 0, qm = 0, p, m;
    char resultado;
    


    cin >> n;

    for(int z = 0; z < n; z++){

        cin >> t;

        if (t == 1){
            qp++;
        } else if (t == 2){
            qm++;
        }
    };

    cin >> p >> m;

    if(qp > p || qm > m){
        resultado = 'N';
    } else {
        resultado = 'S';    
    };
  

    cout << resultado << endl;


    return 0;
}
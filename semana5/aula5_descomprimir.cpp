#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<char> c(n);
    vector<int> quant(n);

    for(int i = 0; i < n; i++){

        cin >> quant[i];
        cin >> c[i];
   

    }

    for(int i = 0; i < n; i++){

        for(int j = 0; j < quant[i]; j++){

            cout << c[i];

        }

        cout << endl;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {

    int bandejas, latas, copos, quebrados = 0;

    cin >>bandejas;

    for(int i = 0; i< bandejas; i++){

        cin >> latas >> copos;

        if(latas > copos){
             quebrados = quebrados + copos;

        };
        
    };

    cout << quebrados << endl;


    return 0;
}
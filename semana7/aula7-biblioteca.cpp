#include <bits/stdc++.h>

using namespace std;

int main (){

    int t;

    while(cin >> t){

        vector<int> v(t);

        for(int i = 0; i < t; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        for(int i = 0; i < t; i++){

            cout << setw(4) << setfill('0') << v[i] << '\n';

        }

    }

    return 0;
}
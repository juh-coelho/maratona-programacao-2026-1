
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, a = 0, b = 0, i;
    


    cin >> n;

    for(int z = 0; z < n; z++){

        cin >> i;

        if(i == 1){

            if(a == 0){
                a= 1;
            } else {
                a = 0;
            };

        } else if (i ==2) {

             if(a == 0){
                a= 1;
            } else {
                a = 0;
            };

             if(b == 0){
              b = 1;
            } else {
                b = 0;
            };


        };

      
        
    };

    cout << a << endl << b << endl;


    return 0;
}
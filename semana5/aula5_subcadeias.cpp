#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<vector<bool>> dp(n, vector<bool>(n, false));

    int maior = 1;

    // tamanho 1
    for(int i = 0; i < n; i++){
        dp[i][i] = true;
    }

    // tamanho 2+
    for(int tam = 2; tam <= n; tam++){

        for(int i = 0; i <= n - tam; i++){

            int j = i + tam - 1;

            if(s[i] == s[j]){

                if(tam == 2){
                    dp[i][j] = true;
                }

                
                else if(dp[i+1][j-1]){
                    dp[i][j] = true;
                }

            }

            if(dp[i][j]){
                maior = max(maior, tam);
            }

        }

    }

    cout << maior << endl;

    return 0;
}
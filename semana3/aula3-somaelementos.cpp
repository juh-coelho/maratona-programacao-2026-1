#include <bits/stdc++.h>

using namespace std;
int main() { 
    
   int n,a, soma = 0;
   
   cin >> n;
   
   for(int i = n; i > 0; i--){
    
		cin >> a;
		
		soma = soma + a;
   };
   
   cout << soma << endl;
  
}

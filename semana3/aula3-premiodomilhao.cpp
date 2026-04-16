#include <bits/stdc++.h>

using namespace std;
int main() { 
    
   int dias, n, diasn = 0, soma = 0;
   
   cin >> dias;
   
   for(int i = 0; i < dias; i++){
    
		if(soma < 1000000){
			diasn++;
		};
		
		cin >> n;
		soma += n;
		
   };
   
   cout << diasn << endl;
  
}

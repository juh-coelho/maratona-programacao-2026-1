#include <bits/stdc++.h>


using namespace std;

int main (){

	int t;
	
	cin >> t;
	
	while(t--){
	
		int tam, contador =0;
		
		cin >> tam;
		
		vector<int> v(tam);
		
		for(int i = 0; i < tam; i++){
			cin >> v[i];
		};
		
	
		vector<int> ordenado = v;
		
		sort(ordenado.begin(), ordenado.end(), greater<int>());

		for(int i = 0; i < tam; i++){

			if(v[i] == ordenado[i] ){

				contador++;

			};

		};
		

		cout << contador << '\n';
	
	};
	

    return 0;
}

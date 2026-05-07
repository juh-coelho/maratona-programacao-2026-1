#include <bits/stdc++.h>


using namespace std;

int main(){

	int quantidade, pontos = 0;

	cin >> quantidade;
	
	cin.ignore();
	
	string gabarito;
	
	getline(cin, gabarito);
	
	string respostas;
	
	getline(cin, respostas);
	
	int tam = gabarito.length();
	
	for(int i =0; i < tam; i++){
		
		char c = tolower(gabarito[i]);
		
		char d = tolower(respostas[i]);
		
		if(c == d){
			pontos++;
			};

	};

	cout << pontos << endl;
	
	return 0;
}

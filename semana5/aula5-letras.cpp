#include <bits/stdc++.h>
#include <sstream> //biblioteca para tratar a string como se fosse uma entrada de dados (tipo cin)
#include <vector> // biblioteca de lista dinamica (array que cresce sozinho)

using namespace std;

int main(){

	char letra; // cria variavel pra letra desejada
    string texto; //cria string 

    cin >> letra;
    cin.ignore();
    getline(cin, texto); // recebe a string

    stringstream ss(texto); //cria variavel ss do tipo stringtrem e coloca nela o conteudo de texto
    string palavra; //cria variavel do tipo string chamada palavra
    vector<string> palavras; //isso cria o vetor que guarda as palavras. ele ira crescer sozinho conforme necessario  

    while (ss >> palavra) { // pega palavra por palavra
        palavras.push_back(palavra);
    };



    int quant_palavras = palavras.size(); //tamanho do vetor das palavras

    vector<int> tem(quant_palavras); //cria outro vetor pra guardar se tem ou nao a letra

    for(int i = 0; i < quant_palavras; i++){  //percorre todas as palavras

        if(palavras[i].find(letra) != string::npos){
            tem[i] = 1;//se tem a letra, marca 1
        } else {
            tem[i] = 0; // se nao tem, 0
        };


    };

    int contador = 0; // contador

    

    for(int i = 0; i < quant_palavras; i++){
        if(tem[i] == 1){
            contador++; // conta quantas palavras tem a letra
        }
    }
    

    float porcentagem = (float)contador / quant_palavras * 100; // calcula a porcentagem

	cout << fixed << setprecision(1) << porcentagem;
	return 0;
}

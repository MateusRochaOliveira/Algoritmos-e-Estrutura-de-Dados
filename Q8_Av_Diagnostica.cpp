/*
=============================QUESTÃO 08=======================================
Desenvolva um programa modularizado em C++ para procurar um valor inteiro em um
vetor de números inteiros.

Especificaç˜oes:

-O vetor deve conter N elementos, onde N ´e uma constante global com valor 5.
-O programa deve incluir uma fun¸c˜ao de busca com as seguintes caracter´ısticas:
– Protótipo sugerido:
int buscar(int v[], int n, int x);
– Parˆametros:
* v[] – vetor de inteiros onde a busca ser´a realizada;
* n – n´umero de elementos v´alidos no vetor;
* x – valor a ser buscado no vetor.
– Valor de retorno:
* O ´ındice da posi¸c˜ao onde x foi encontrado;
* -1, caso x n˜ao esteja presente no vetor.
Exigˆencias para a fun¸c˜ao main()
- Declarar o vetor de tamanho N;
- Solicitar ao usuário o preenchimento do vetor;
- Ler o valor x a ser procurado;
- Chamar a funç˜ao buscar() e exibir:
– A posiç˜ao onde o valor foi encontrado, se existir;
– Uma mensagem informando que o valor n˜ao foi encontrado, se o retorno for -1.
*/

//Bibliotecas
#include <iostream>
#include <cstdlib>
using namespace std;

//constante global
const int N = 5;


// Função de busca
int buscar(int v[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            return i;  // Retorna o índice onde x foi encontrado
        }
    }
    return -1;  // Retorna -1 se x não for encontrado
}


int main(){
int v[N];
int x;

cout << "\nDigite o valor a ser procurado: ";
cin >> x;
for(int i = 1;i<(N+1) ;i++){

    cout << "Digite "<< N <<"elementos para preencher o vetor: \n";
    cout << "Elemento "<< i << ": \n";
    cin >> v[i];
int resultado = buscar(v, N, x);
    // Exibe o resultado
    if (resultado != -1) {
        cout << "\nValor encontrado na posicao: " << resultado << endl;
    } else {
        cout << "\nValor nao encontrado no vetor." << endl;
    }

}

}



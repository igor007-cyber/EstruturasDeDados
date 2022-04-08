#include <iostream>

using namespace std;

string ImparPar(int numero);
string NumeroPrimo(int numero);
void listaNomes(string nomes[]);

int main()
{
    string nomes[] = {"sonic","tails","Dr Egman"};
    int numero;
    cout << "Digite um numero: ";
    cin >> numero;
    cout << "\n O numero "<< numero << " vai ser " << ImparPar(numero);
    cout << "\n O numero "<< numero << " ele e " << NumeroPrimo(numero) << endl;
    listaNomes(nomes);

    return 0;
}
string ImparPar(int numero){
    string escolha;
    if(numero % 2 == 0){
        escolha = "Par";
    }
    else{
        escolha = "Impar";
    }
    return escolha;
}
string NumeroPrimo(int numero){
    string escolha;
    if(numero == 0 || numero == 1 || numero == -1){
        escolha = "Nao e primo";
    }
    else{
        escolha = "E primo";
    }
    return escolha;
}
void listaNomes(string nomes[]){   
    for(int i = 0; i < 3; i++){
        cout << "nome " << i << ": " << nomes[i] << endl;
    }
}

#include <iostream>

using namespace std;

int main() {
    
    //1) colocar o seu nome
    string nome;
    cout << "Digite o seu nome: ";
    cin >> nome;
    cout << endl << "Seja bem vindo " << nome << endl; 
    
    //2) colocar um numro qualquer ao cubo
    int num;
    cout << "\nDigite o seu numero: ";
    cin >> num; 
    cout << endl << "O numero " << num << " elevado ao cubo e: " << num * num * num;
    
    // 3) Transformar qualquer polegada em centimetro
    float PO;
    float CM = 2.54;
    cout << "\nNumero de polegadas: ";
    cin >> PO;
    cout << endl << "A convercao de "<< PO <<" polegada<s> para centimetro é: " << PO * CM;



    return 0;
}
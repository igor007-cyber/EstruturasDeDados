#include <iostream>
using namespace std;
/*
4. A sequência de Fibonacci é calculada pela soma dos dois 
últimos valores, ex.: 1, 1, 2, 3, 5, 8, 13, etc. Crie uma função 
que receba do usuário um número N e imprima os N primeiros números
da sequência.
5. Faça uma função que leia um inteiro e calcule o seu fatorial.

int main()
{
    // 1. Dados três números, imprimi-los em ordem crescente.   
    int num1, num2, num3, temp;  
    cout << "Digite 3 numeros:" << endl;
    cin >> num1 >> num2 >> num3;
    if(num2 < num1){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if(num3 < num1){
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if(num3 < num2){
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    cout << num1 << " " << num2 << " " << num3 << endl;    
    return 0;
}

int main()
{
    // 2. Dado os número P e Q, verifique se P é divisível por Q. 
    double P, Q;

    cout << "Digite dois numeros: " << endl;
    cin >> P >> Q;
    if(Q == 0)
        cout << "Nao da pra dividir";
    else if(P/Q == 0)
        cout << "P e divisivel por Q";
    else
        cout << "P nao e divisivel por Q";    

    return 0;
}
*/

// 3. Escreva um programa que calcule o salário de um profissional
// liberal baseado no valor da hora de serviço e da quantidade de 
// horas trabalhadas, deduzidos os descontos com INSS. O programa 
// deve ler os dados exigidos, calcular o valor do salário bruto e 
// do salário líquido, descontados os impostos e exibir todos os 
// valores lidos e calculados no final.

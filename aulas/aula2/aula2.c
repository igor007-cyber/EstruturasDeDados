#include <stdio.h>
#include <stdlib.h>

float soma(float a, float b);
float Subtracao(float a, float b);
float multiplicacao(float a, float b);
float Divisao(float a, float b);
void mensagem();

int main(){
    float x,y;

    printf(" == Aula de PEER em C - Funcoes ==\n");
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("Digite outro numero: ");
    scanf("%f", &y);
    printf("\nAdicao.......: %.2f\n",soma(x,y));
    printf("Subtracao.......: %.2f\n",Subtracao(x,y));
    printf("multiplicacao.......: %.2f\n",multiplicacao(x,y));
    printf("Divisao.......: %.2f\n",Divisao(x,y));
    mensagem();

    system("Pause");
    return 0;
}
float soma(float a, float b){
    return a + b;
}
float Subtracao(float a, float b){
    return a - b;
}
float multiplicacao(float a, float b){
    return a * b;
}
float Divisao(float a, float b){
    return a / b;
}

void mensagem(){
    printf("\n\n***** Finalizou ******\n\n");
}

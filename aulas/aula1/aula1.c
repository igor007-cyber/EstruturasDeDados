#include <stdlib.h>
#include <stdio.h>

int main(){

    char aluno[20][5];
    float nota[5][3];
    float soma,media;

    for(int i = 0; i < 5; i++){
        printf("\nDigite o nome do(a) aluno(a): ");
        scanf("%s", &aluno[i]);
        soma = 0;
        media = 0;
        for(int x = 0; x < 3; x++){
            printf("\nDigite a nota: ");
            scanf("%f", &nota[i][x]);
            soma = soma + nota[i][x];
            media = soma/3;
        }
        printf("\nA media do aluno e %s",&aluno[i]);
        printf("\n  A media: %.2f",media);
    }



    system("Pause");
    return 0;
}

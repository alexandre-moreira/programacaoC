#include <stdio.h>

int main(){
    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "Alexandre";

    printf("A idade do %s e: %d\n", nome, idade);
    printf("A altura e: %.2f\n", altura);
    printf("A opcao e: %c\n", opcao);

    /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)

    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um numero de ponto flutuante no formato padrao.
    %f: Imprime um numero de ponto flutuante na notacao cientifica.
    %c: Imprime um unico caractere.
    %s: Imprime uma cadeia(String) de caracteres.
    
    */

}
#include<stdio.h>
int main(){
    /*
      Soma(+)
      Subtracao(-)
      Multiplicacao(*)
      Divisao(/)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao;
    float divisao;

    printf("Entre com o numero 1: \n");
    scanf("%d", &numero1);
    printf("Entre com o numero 2: \n");
    scanf("%d", &numero2);


     //operacao soma
    soma = numero1 + numero2;

     //operacao subtracao
    subtracao = numero1 - numero2;

     //operacao multiplicacao
    multiplicacao = numero1 * numero2;

     //operacao divisao
    divisao = numero1 / numero2;

    printf("A Soma e: %d\n", soma);
    printf("A Subtracao e: %d\n", subtracao);
    printf("A Multiplicacao e: %d\n", multiplicacao);
    printf("A Divisao e: %.2f\n:", divisao);
}
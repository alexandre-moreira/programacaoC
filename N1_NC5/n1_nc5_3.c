#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;
    char nome[20];

    // fgets(nome, 50, stdin); // Lê no máximo 49 caracteres da entrada padrão (stdin)

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Deseja finalizar o cadastro? S/N: ");
    scanf(" %c", &opcao);

    printf("\n========= Gaia System ======\n");
    printf("Nome, %s \n", nome);
    printf("Idade, %d \n", idade);
    printf("Altura, %.2f \n", altura);
    printf("Cadastrado, %c \n", opcao);
}
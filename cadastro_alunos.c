#include <stdio.h>

    char nome[50];
    int idade;

int main() {

    printf("Cadastro de Alunos\n");
    printf("Digite o Nome do aluno: ");
    scanf("%s", nome);
    
    printf("Digite a Idade do aluno: ");
    scanf("%d", &idade);
    
    
    printf("Lista de Alunos Cadastrados\n");
    printf("---------------------------\n");
    
    if (idade == 17) {
        printf("Aluno: %s\n", nome);
        printf("Idade: %d\n", idade);
        printf("Serie: 3 ANO DO ENSINO MEDIO");
    }
    
    if (idade == 16) {
        printf("Aluno: %s\n", nome);
        printf("Idade: %d\n", idade);
        printf("Serie: 2 ANO DO ENSINO MEDIO");
    }
    
    if (idade == 15) {
        printf("Aluno: %s\n", nome);
        printf("Idade: %d\n", idade);
        printf("Serie: 1 ANO DO ENSINO MEDIO");
    }
    
    if (idade == 14) {
        printf("Aluno: %s\n", nome);
        printf("Idade: %d\n", idade);
        printf("Serie: 9 ANO");
    }
    
    if (idade == 13) {
        printf("Aluno: %s\n", nome);
        printf("Idade: %d\n", idade);
        printf("Serie: 8 ANO");
    }

    return 0;
}

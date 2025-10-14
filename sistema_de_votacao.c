#include <stdio.h>

int main() {
    char nome[50];
    int cadastro;
    int cpf;
    int voto;

    printf(" Urna Online 2025📠 \n");

    printf("Digite seu Nome: ");
    scanf("%s", nome);

    printf("Digite seu CPF: ");
    scanf("%d", &cpf);

    printf("Digite seu RG: ");
    scanf("%d", &cadastro);

    printf("\n ✅  Cadastro Realizado ✅ \n");
    printf("\n 📟  Vote em seu Candidato 📟 \n");
    
    printf("Digite o Numero de Eleitor: ");
    scanf("%d", &voto);
    
    printf("\n\n  VOTO REALIZADO  \n\n");
    printf("Voto feito no Numero de Eleitor %d\n", voto);
    

    return 0;
}

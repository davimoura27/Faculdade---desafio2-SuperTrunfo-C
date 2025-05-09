#include <stdio.h>

int main(){
    int idade;
    char *nome;

    printf("Minha idade é:");
    scanf("%d", &idade);
    getchar();
    printf("Digite seu nome completo:");
    fgets(nome,50,stdin);

    printf("Ola %s,sua idade é:%d\n", nome,idade);
    return 0;
}


/*
%d Imprime um inteiro no formato decimal
%i Equivalente a %d
%f Imprime um numero de ponto flutuante no formato padrão
%e Imprime um numero de ponto flutuante na notação cientifica
%c imprime um unico caractere
%s imprime uma cadeia (string) de caracteres
*/
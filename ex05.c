/*
Autor.....: Matheus Guilherme Moreira de Oliveira
Data......: 15/08/2024
Objetivo..: Ler valores numéricos sucessivos e exibir a soma, média e total de valores.
*/

#include <stdio.h>

int main() {
    int valor, soma = 0, contagem = 0;

    while (1) {
        printf("Digite um valor (negativo para sair): ");
        scanf("%d", &valor);

        if (valor < 0) break;

        soma += valor;
        contagem++;
    }

    if (contagem > 0) {
        printf("Total do somatorio: %d\n", soma);
        printf("Media dos valores: %.2f\n", (float)soma / contagem);
        printf("Total de valores lidos: %d\n", contagem);
    } else {
        printf("Nenhum valor foi inserido.\n");
    }

    return 0;
}

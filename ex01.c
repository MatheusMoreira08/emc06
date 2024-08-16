/*
Autor.....: Matheus Guilherme Moreira de Oliveira
Data......: 15/08/2024
Objetivo..: Mostrar a série de Fibonacci até o décimo quinto termo.
*/

#include <stdio.h>

int main() {
    int primeiro = 1, segundo = 1, proximo, contador;

    printf("Serie de Fibonacci ate o 15 termo:\n");
    printf("%d, %d", primeiro, segundo);

    for (contador = 3; contador <= 15; contador++) {
        proximo = primeiro + segundo;
        printf(", %d", proximo);
        primeiro = segundo;
        segundo = proximo;
    }

    printf("\n");
    return 0;
}


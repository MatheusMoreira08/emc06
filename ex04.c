/*
Autor.....: Matheus Guilherme Moreira de Oliveira
Data......: 15/08/2024
Objetivo..:  Coletar dados sobre salário e número de filhos, e calcular várias estatísticas.
*/

#include <stdio.h>

int main() {
    int voto, votosCand1 = 0, votosCand2 = 0, votosCand3 = 0, votosCand4 = 0, votosNulos = 0, votosBrancos = 0;

    while (1) {
        printf("Digite o codigo do candidato (0 para sair): ");
        scanf("%d", &voto);

        if (voto == 0) break;

        switch (voto) {
            case 1: votosCand1++; break;
            case 2: votosCand2++; break;
            case 3: votosCand3++; break;
            case 4: votosCand4++; break;
            case 5: votosNulos++; break;
            case 6: votosBrancos++; break;
            default: printf("Codigo invalido!\n");
        }
    }

    printf("Total de votos para o candidato 1: %d\n", votosCand1);
    printf("Total de votos para o candidato 2: %d\n", votosCand2);
    printf("Total de votos para o candidato 3: %d\n", votosCand3);
    printf("Total de votos para o candidato 4: %d\n", votosCand4);
    printf("Total de votos nulos: %d\n", votosNulos);
    printf("Total de votos em branco: %d\n", votosBrancos);

    return 0;
}


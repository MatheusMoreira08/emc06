/*
Autor.....: Matheus Guilherme Moreira de Oliveira
Data......: 15/08/2024
Objetivo..:  Coletar dados sobre salário e número de filhos, e calcular várias estatísticas.
*/

#include <stdio.h>

int main() {
    float salario, somaSalarios = 0, maiorSalario = 0;
    int filhos, somaFilhos = 0, totalPessoas = 0, salariosAte100 = 0;

    while (1) {
        printf("Digite o salario e o numero de filhos (salario negativo para sair): ");
        scanf("%f %d", &salario, &filhos);

        if (salario < 0) break;

        somaSalarios += salario;
        somaFilhos += filhos;
        totalPessoas++;

        if (salario > maiorSalario) maiorSalario = salario;
        if (salario <= 100) salariosAte100++;
    }

    if (totalPessoas > 0) {
        printf("Media do salario: %.2f\n", somaSalarios / totalPessoas);
        printf("Media do numero de filhos: %.2f\n", (float)somaFilhos / totalPessoas);
        printf("Maior salario: %.2f\n", maiorSalario);
        printf("Percentual de pessoas com salario ate R$100,00: %.2f%%\n", (float)salariosAte100 / totalPessoas * 100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}
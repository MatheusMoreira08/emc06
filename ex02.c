/*
Autor.....: Matheus Guilherme Moreira de Oliveira
Data......: 15/08/2024
Objetivo..: Ler 5 conjuntos de números de alunos e alturas, e encontrar o aluno mais alto e o mais baixo.
*/

#include <stdio.h>

int main() {
    int numAluno, altura, contador;
    int numAlunoMaisAlto, alturaMaxima = 0;
    int numAlunoMaisBaixo, alturaMinima = 1000;

    for (contador = 0; contador < 5; contador++) {
        printf("Digite o numero do aluno e a altura em cm: ");
        scanf("%d %d", &numAluno, &altura);

        if (altura > alturaMaxima) {
            alturaMaxima = altura;
            numAlunoMaisAlto = numAluno;
        }

        if (altura < alturaMinima) {
            alturaMinima = altura;
            numAlunoMaisBaixo = numAluno;
        }
    }

    printf("Aluno mais alto: Numero %d, Altura %d cm\n", numAlunoMaisAlto, alturaMaxima);
    printf("Aluno mais baixo: Numero %d, Altura %d cm\n", numAlunoMaisBaixo, alturaMinima);

    return 0;
}


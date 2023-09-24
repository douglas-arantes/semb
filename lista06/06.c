#include <stdio.h>
#include <stdlib.h> // Para a função malloc

// Definição da estrutura t_aluno
typedef struct {
    char nome[80];
    float nota;
} t_aluno;

// Função para ler o nome e a nota de um aluno
void lerAluno(t_aluno *aluno) {
    printf("Digite o nome do aluno: ");
    scanf("%s", aluno->nome);

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno->nota);
}

// Função para encontrar a maior nota de aluno no vetor
void encontrarMaiorNota(t_aluno alunos[], int numAlunos) {
    float maiorNota = alunos[0].nota;
    int indiceMaiorNota = 0;

    for (int i = 1; i < numAlunos; i++) {
        if (alunos[i].nota > maiorNota) {
            maiorNota = alunos[i].nota;
            indiceMaiorNota = i;
        }
    }

    printf("O aluno com a maior nota eh:\n");
    printf("Nome: %s\n", alunos[indiceMaiorNota].nome);
    printf("Nota: %.2f\n", alunos[indiceMaiorNota].nota);
}

int main() {
    int numAlunos;

    printf("Digite o numero de alunos: ");
    scanf("%d", &numAlunos);

    t_aluno *alunos = (t_aluno *)malloc(numAlunos * sizeof(t_aluno));

    if (alunos == NULL) {
        printf("Erro de alocacao de memoria.\n");
        return 1;
    }

    for (int i = 0; i < numAlunos; i++) {
        printf("Aluno %d:\n", i + 1);
        lerAluno(&alunos[i]);
    }

    encontrarMaiorNota(alunos, numAlunos);

    free(alunos); // Liberar a memória alocada dinamicamente

    return 0;
}

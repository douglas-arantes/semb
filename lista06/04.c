#include <stdio.h>
#include <string.h>


struct Empregado {
    char nome[50];
    char sobrenome[50];
    char dataNascimento[11];
    char CPF[12];
    char dataAdmissao[11];
    float salario;
};


int buscarPorCPF(struct Empregado empregados[], int numEmpregados, const char cpfBuscado[]) {
    for (int i = 0; i < numEmpregados; i++) {
        if (strcmp(empregados[i].CPF, cpfBuscado) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    struct Empregado colaboradores[100];
    int numColaboradores = 0;

    int continuar = 1;

    while (continuar) {
        // Solicitar entrada do usuário para preencher os dados do empregado
        printf("Digite os dados do empregado:\n");
        printf("Nome: ");
        scanf("%s", colaboradores[numColaboradores].nome);

        printf("Sobrenome: ");
        scanf("%s", colaboradores[numColaboradores].sobrenome);

        printf("Data de Nascimento (dd/mm/aaaa): ");
        scanf("%s", colaboradores[numColaboradores].dataNascimento);

        printf("CPF (xxxxxxxxxxx): ");
        scanf("%s", colaboradores[numColaboradores].CPF);

        printf("Data de Admissão (dd/mm/aaaa): ");
        scanf("%s", colaboradores[numColaboradores].dataAdmissao);

        printf("Salário: ");
        scanf("%f", &colaboradores[numColaboradores].salario);

        numColaboradores++;

        printf("Deseja continuar cadastrando colaboradores? (1 para continuar, 0 para sair): ");
        scanf("%d", &continuar);
    }

    char cpfBuscado[12];
    printf("Digite o CPF a ser pesquisado (xxxxxxxxxxx): ");
    scanf("%s", cpfBuscado);

    int indiceEncontrado = buscarPorCPF(colaboradores, numColaboradores, cpfBuscado);

    if (indiceEncontrado != -1) {
        printf("Colaborador encontrado:\n");
        printf("Nome: %s %s\n", colaboradores[indiceEncontrado].nome, colaboradores[indiceEncontrado].sobrenome);
        printf("Data de Nascimento: %s\n", colaboradores[indiceEncontrado].dataNascimento);
        printf("CPF: %s\n", colaboradores[indiceEncontrado].CPF);
        printf("Data de Admissão: %s\n", colaboradores[indiceEncontrado].dataAdmissao);
        printf("Salário: %.2f\n", colaboradores[indiceEncontrado].salario);
    } else {
        printf("Colaborador com CPF %s não encontrado.\n", cpfBuscado);
    }

    return 0;
}

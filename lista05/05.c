#include <stdio.h>


int compara(int A[], int tamA, int B[], int tamB) {
    // Percorre B
    for (int i = 0; i < tamB; i++) {
        int encontrado = 0; // Indica se B for encontrado em A

        // Verifica o elemento atual de B em A
        for (int j = 0; j < tamA; j++) {
            if (B[i] == A[j]) {
                encontrado = 1;
                break; // Elemento encontrado, sai do loop interno
            }
        }

        // Se o elemento atual de B não foi encontrado em A, retorna 0
        if (!encontrado) {
            return 0;
        }
    }

    // Todos os elementos de B foram encontrados em A
    return 1;
}

int main() {
    int tamA, tamB;

    printf("Digite o tamanho do vetor A: ");
    scanf("%d", &tamA);

    int vetorA[tamA];

    printf("Digite os elementos do vetor A:\n");
    for (int i = 0; i < tamA; i++) {
        scanf("%d", &vetorA[i]);
    }

    printf("Digite o tamanho do vetor B: ");
    scanf("%d", &tamB);

    int vetorB[tamB];

    printf("Digite os elementos do vetor B:\n");
    for (int i = 0; i < tamB; i++) {
        scanf("%d", &vetorB[i]);
    }

    if (compara(vetorA, tamA, vetorB, tamB)) {
        printf("Os elementos de B estão contidos em A.\n");
    } else {
        printf("Os elementos de B não estão contidos em A.\n");
    }

    return 0;
}

/*
Pergunta: Qual o resultado da execução do programa abaixo? Ocorre algum erro?

Resposta: 
O programa foi feito para calcular e mostrar os primeiros n fatoriais (1!, 2!, 3!, ..., n!) usando alocação dinâmica de memória.
Existe um erro visível depois de executar ele. Exemplo de saída retornada pelo programa:

Digite n: 8
1
1
2
6
24
120
720
5040

Nota-se que o número 1 é impresso duas vezes. Isso acontece, porque o primeiro elemento do array vet é inicializado como 1 dentro da 
função misterio, e depois o loop começa em i = 1. Portanto, o primeiro elemento já está definido como 1, e então o loop calcula os 
fatoriais para os valores restantes. No entanto, o primeiro elemento deveria ser 1 e não ser recalculado no loop.
*/

#include <stdio.h>
#include <stdlib.h>

int *misterio(int n) {
    int i, *vet = malloc(n * sizeof(int));
    vet[0] = 1;
    for (i = 1; i < n; i++) {
        vet[i] = i * vet[i - 1];
    }
    return vet;
}

int main() {
    int i, n, *v;
    printf("Digite n: ");
    scanf("%d", &n);
    v = misterio(n);
    for (i = 0; i < n; i++) {
        printf("%d\n", v[i]);
    }
    free(v);
    return 0;
}

/*
Pergunta: Qual é o resultado do programa abaixo?

Resposta:

1) printf("%d\n", *(p + 3)); Isso imprime o valor apontado por p + 3, que é o quarto elemento após p. Portanto, imprime 14.

2) printf("%d\n", *(q - 3)); Isso imprime o valor apontado por q - 3, que é o terceiro elemento antes de q. Portanto, imprime 34.

3) printf("%d\n", q - p); Isso imprime a diferença entre os ponteiros q e p. Resultado será 4.

4) (q < p) ? printf("SIM\n") : printf("NAO\n"); Isso verifica se q é menor que p (ou seja, se q aponta para um elemento anterior a p). Como é falso, imprimirá "NAO".

5) if (*p < *q) { printf("SIM\n"); } else { printf("NAO\n"); } Isso compara os valores apontados por p e q. Como 15 é maior que 2, imprimirá "NAO".

O resultado do programa é:
14
34
4
NAO
NAO
*/

#include <stdio.h>

int main() {
  int V[] = {5, 15, 34, 54, 14, 2, 52, 72};
  int *p = &V[1];
  int *q = &V[5];

  printf("%d\n", *(p + 3));
  printf("%d\n", *(q - 3));
  printf("%d\n", q - p);

  (q < p) ? printf("SIM\n") : printf("NAO\n");

  if (*p < *q) {
    printf("SIM\n");
  } else {
    printf("NAO\n");
  }

  return 0;
}



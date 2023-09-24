/*
Pergunta: Qual é o resultado do programa abaixo?

Resposta: 
O programa inverte o conteúdo do array V usando dois ponteiros, p e q. Em seguida, ele imprime o conteúdo do array após a inversão. Vamos analisar o resultado passo a passo:

1) O array V é inicializado com os valores de 1 a 10.

2) Dois ponteiros, p e q, são inicializados para apontar para o primeiro (&V[0]) e o último (&V[N - 1]) elementos do array, respectivamente.

3) O loop while (p < q) inverte o conteúdo do array. Ele faz o seguinte em cada iteração:

    3.1) Armazena o valor apontado por p em temp.
    3.2) Atribui o valor apontado por q a *p.
    3.3) Incrementa p para apontar para o próximo elemento.
    3.4) Atribui o valor em temp ao elemento apontado por q.
    3.5) Decrementa q para apontar para o elemento anterior.

Esse processo inverte efetivamente os valores no array V.

Resulta:
10
9
8
7
6
5
4
3
2
1
*/

#include <stdio.h>
#define N 10

int main() {
  int i, V[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *p = &V[0], *q = &V[N - 1], temp;

  while (p < q) {
    temp = *p;
    *p++ = *q;
    *q-- = temp;
  }

  p = V;
  for (i = 0; i < N; i++) {
    printf("%d\n", *p++);
  }

  return 0;
}

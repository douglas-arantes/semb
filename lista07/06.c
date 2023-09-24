/*
Pergunta: o programa abaixo, os valores de x e v[0] não deveriam ser iguais? O que acontece?

Resposta:
No programa fornecido, os valores de x e v[0] não deveriam ser iguais após a chamada das funções func1 e func2. Isso ocorre porque os parâmetros das funções func1 e func2 são passados por valor e por referência, respectivamente.

Aqui está uma explicação mais detalhada:

1) func1(int x): Essa função recebe uma cópia do valor de x. Qualquer modificação feita em x dentro da função func1 não afeta a variável x na função main. Portanto, após a chamada de func1, o valor de x na função main permanece como 111.

2) func2(int *v): Essa função recebe um ponteiro para um inteiro. Quando você faz v[0] = 9 * v[0];, você está modificando o valor apontado por v, que é v[0] na função main. Portanto, após a chamada de func2, o valor de v[0] na função main será 9 * 111, ou seja, 999.

Portanto, x e v[0] não são iguais após a chamada das funções func1 e func2. x na função main permanece 111, enquanto v[0] na função main se torna 999.

*/
#include <stdio.h>

void func1(int x) {
  x = 9 * x;
}

void func2(int *v) {
  v[0] = 9 * v[0];
}

int main() {
  int x, v[2];

  x = 111;
  func1(x);
  printf("x: %d\n", x);

  v[0] = 111;
  func2(v);
  printf("v[0]: %d\n", v[0]);

  return 0;
}

/*
P: Qual o resultado do código abaixo?

R: Fazendo um teste de mesa e, em seguida, executando o código, o resultado será 13.

Teste de mesa:

1. int a = 1, b = 10, c;: Declara três variáveis inteiras a, b e c e inicializa a com 1 e b com 10.

2. int *p = &a;: Declara um ponteiro p para um inteiro e o inicializa com o endereço de a.

3. int **r = &p;: Declara um ponteiro para um ponteiro r e o inicializa com o endereço de p.

4. (**r)++;: Isso incrementa o valor apontado por r, que é o mesmo que p, que, por sua vez, aponta para a. Portanto, a agora se torna 2.

5. b++;: Isso incrementa b para 11.

6. c = *p + b;: Isso atribui a c o valor de *p (que é o valor de a, que agora é 2) somado a b (que é 11). Portanto, c será igual a 13.

7. printf("%d\n", c);: Isso imprime o valor de c, que é 13, seguido por uma nova linha.

*/

#include <stdio.h>

int main() {
  int a = 1, b = 10, c;
  int *p = &a;
  int **r = &p;

  (**r)++;
  b++;
  c = *p + b;

  printf("%d\n", c);

  return 0;
}

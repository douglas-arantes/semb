/*

Resposta:
O programa cria uma estrutura dois_valores, inicializa duas variáveis estruturadas reg1 e reg2, e um ponteiro p apontando para reg1. Em seguida, ele realiza algumas operações de atribuição e imprime os valores. Vamos analisar o resultado:

1) struct dois_valores reg1 = {53, 7.112}, reg2, *p = &reg1;: Aqui, reg1 é inicializada com os valores 53 e 7.112. reg2 é declarada, mas não inicializada. O ponteiro p é inicializado para apontar para reg1.

2) reg2.vi = (*p).vf;: Isso atribui o valor do campo vf da estrutura apontada por p (que é reg1) ao campo vi de reg2. Portanto, reg2.vi recebe o valor 7 (a parte inteira de 7.112).

3) reg2.vf = (*p).vi;: Isso atribui o valor do campo vi da estrutura apontada por p (que é reg1) ao campo vf de reg2. Portanto, reg2.vf recebe o valor 53.

4) printf("1: %d %f\n2: %d %f\n", reg1.vi, reg1.vf, reg2.vi, reg2.vf);: Isso imprime os valores de reg1 e reg2. O resultado será:

1: 53 7.112000
2: 7 53.000000

*/

#include <stdio.h>

struct dois_valores {
  int vi;
  float vf;
};

int main() {
  struct dois_valores reg1 = {53, 7.112}, reg2, *p = &reg1;

  reg2.vi = (*p).vf;
  reg2.vf = (*p).vi;

  printf("1: %d %f\n2: %d %f\n", reg1.vi, reg1.vf, reg2.vi, reg2.vf);

  return 0;
}

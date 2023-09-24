/*
Pergunta:

Resposta:

O programa cria uma estrutura pts_int que possui dois ponteiros para inteiros. Ele então declara duas variáveis inteiras, i1 e i2, 
e uma variável estruturada reg do tipo pts_int. O programa atribui endereços de i1 e i2 aos ponteiros na estrutura reg e, em seguida, 
modifica o valor apontado por reg.pt1 para -2. O resultado:

i1 = -2, *reg.pt1 = -2
i2 = 100, *reg.pt2 = 100

*/
#include <stdio.h>

struct pts_int {
  int *pt1;
  int *pt2;
};

int main() {
  int i1, i2 = 100;
  struct pts_int reg;

  reg.pt1 = &i1;
  reg.pt2 = &i2;

  *reg.pt1 = -2;

  printf("i1 = %d, *reg.pt1 = %d\n", i1, *reg.pt1);
  printf("i2 = %d, *reg.pt2 = %d\n", i2, *reg.pt2);

  return 0;
}

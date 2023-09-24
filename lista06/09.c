/*
P: Qual o resultado do programa abaixo?

R: O resultado do programa será a impressão da seguinte mensagem: Cor verde
Porque o programa define uma enumeração com cinco valores, onde green tem o valor 2.
Em seguida, ele atribui green à variável cores e, ao usar um switch para verificar o valor de cores,
ele corresponde ao caso 2, que está associado à mensagem "Cor verde".

*/

#include <stdio.h>

int main() {
    enum { black, blue, green, cyan, red } cores;
    cores = green;

    switch (cores) {
        case 0:
            printf("Cor preto\n");
            break;
        case 1:
            printf("Cor azul\n");
            break;
        case 2:
            printf("Cor verde\n");
            break;
        case 3:
            printf("Cor ciano\n");
            break;
        case 4:
            printf("Cor vermelho\n");
            break;
        default:
            printf("??\n");
    }

    return 0;
}

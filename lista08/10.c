/*

Resposta:
Quando o valor de n é igual a 4.000.000, o programa está tentando alocar um vetor muito grande na memória. A alocação de memória dinâmica em
C é limitada pela quantidade de memória disponível no sistema e pelas configurações do compilador.

Se o sistema tiver memória suficiente para alocar um vetor de 4.000.000 de inteiros, o programa deve funcionar sem problemas e 
imprimir os números de 0 a 3.999.999. No entanto, se o sistema não tiver memória suficiente, a alocação de memória falhará e 
o programa poderá se comportar de maneira imprevisível, ou pode receber um erro de falta de memória.

Meu PC não possui memória suficiente para isso, então ele simplesmente não mostrou nada e saiu.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n]; // Vetor alocado com tamanho n não pré-estabelecido

    for (i = 0; i < n; i++) {
        v[i] = i;
    }

    for (i = 0; i < n; i++) {
        printf("%d\n", v[i]);
    }

    return 0;
}

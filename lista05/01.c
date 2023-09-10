// IMPORTANTE!!!!!!!!!!!
// AO COMPILAR O PROGRAMA, USE -lm para linkar as bibliotecas
// EXEMPLO: gcc 01.c -o 01 -lm

#include <stdio.h>
#include <math.h>

float distancia(int x1, int y1, int x2, int y2) {
    int varX = x2 - x1;
    int varY = y2 - y1;

    float distancia = sqrt(varX * varX + varY * varY);
    
    return distancia;
}

int main() {
    int x1, y1, x2, y2;

    printf("Digite as coordenadas do ponto P1 (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Digite as coordenadas do ponto P2 (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    float dist = distancia(x1, y1, x2, y2);

    printf("A distância euclidiana entre os pontos P1 e P2 é: %.2f\n", dist);

    return 0;
}

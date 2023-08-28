// Programa com variavel auxiliar

#include <stdio.h>

int main()
{
    int x, y, auxiliar;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    auxiliar = x;
    x = y;
    y = auxiliar;

    printf("Depois da troca:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);

    return 0;
}

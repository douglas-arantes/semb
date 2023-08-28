// Programa sem variavel auxiliar

#include <stdio.h>

int main()
{
    int x, y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("Depois da troca:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);

    return 0;
}

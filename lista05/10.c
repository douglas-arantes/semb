#include <stdio.h>

double pot(int a, int b)
{

    // Todo número elevado a 0 é 1
    if (b == 0)
    {
        return 1.0;
    }

    // Todo número elevado a 1 é ele mesmo
    if (b == 1)
    {
        return (double)a;
    }
    else
    {
        return (double)a * pot(a, b - 1);
    }
}

int main()
{
    int base, expoente;

    printf("Digite a base a: ");
    scanf("%d", &base);

    printf("Digite o expoente b: ");
    scanf("%d", &expoente);

    double resultado = pot(base, expoente);

    printf("%d^%d = %.2lf\n", base, expoente, resultado);

    return 0;
}

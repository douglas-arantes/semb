#include <stdio.h>

long long int fat(int n)
{
    // Se for 0 é 1
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fat(n - 1);
    }
}

int main()
{
    int numero;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero);

    if (numero < 0)
    {
        printf("Digite um número não negativo.\n");
        return 1;
    }

    long long int resultado = fat(numero);

    printf("%d! = %lld\n", numero, resultado);

    return 0;
}

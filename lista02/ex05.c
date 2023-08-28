#include <stdio.h>

int main()
{
    int a;
    printf("Digite um número inteiro: ");
    scanf("%d", &a);

    if (!(a % 2) && (a < 100))
    {
        printf("O número é par e menor que 100\n");
    }
    else if ((a % 2 != 0) && (a > 100))
    {
        printf("O número é ímpar e maior que 100\n");
    }
    else if ((a % 2 == 0) || (a >= 100))
    {
        printf("O número é par e maior ou igual a 100\n");
    }
    else
    {
        printf("O número é ímpar e menor que 100\n");
    }

    return 0;
}

/*
PERGUNTA: O que faz a função abaixo (imprime_alguma_coisa)?

RESPOSTA: A função imprime_alguma_coisa é recursiva e imprime a forma binária de um número n.

PORÉM, ela não representa números negativos nem o zero.
*/

#include <stdio.h>

void imprime_alguma_coisa(int n)
{
    if (n != 0)
    {
        imprime_alguma_coisa(n / 2);
        printf("%c", '0' + n % 2);
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

    if (numero == 0)
    {
        printf("A representação binária de 0 é: 0\n");
    }
    else
    {
        printf("A representação binária de %d é: ", numero);
        imprime_alguma_coisa(numero);
        printf("\n");
    }

    return 0;
}
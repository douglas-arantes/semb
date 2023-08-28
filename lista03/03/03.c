#include <stdio.h>

struct Multiples
{
    int num1;
    int num2;
};


struct Multiples find_multiples(int vect[], int vect_size, int x) {
    struct Multiples multiples = {0, 0};

    // A estratégia aqui é combinar elemento a elemento até encontrar 2 múltiplos
    for (int i = 0; i < vect_size - 1; i++) {
        for (int j = i + 1; j < vect_size; j++) {
            if (vect[i] * vect[j] == x) {
                multiples.num1 = vect[i];
                multiples.num2 = vect[j];
                return multiples;
            }
        }
    }

    if (x == 0)
    {
        if (multiples.num1 == 0 && multiples.num2 == 0) 
        {
            multiples.num1 = -1;
            multiples.num2 = -1;
            return multiples;
        }
    }

    return multiples;
}

int main()
{
    int vect_size = 10;
    int vect[vect_size];

    for (int i = 0; i < vect_size; i++)
    {
        printf("Digite o #%d número: ", i+1);
        scanf("%d", &vect[i]);
    }

    int x = 0;
    printf("Digite um número inteiro X: ");
    scanf("%d", &x);

    struct Multiples multiples = find_multiples(vect, vect_size, x);

    if (multiples.num1 * multiples.num2 != x) 
    {
        printf("Não existem 2 múltipos de %d no vetor.\n", x);
        return -1;
    }

    printf("Resultado = %d, %d\n", multiples.num1, multiples.num2);

    return 0;
}


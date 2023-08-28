#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    int quadrado = num * num;
    int cubo = num * num * num;

    printf("O quadrado de %d = %d\n", num, quadrado);
    printf("O cubo de %d = %d\n", num, cubo);

    return 0;
}
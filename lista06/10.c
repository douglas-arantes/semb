/*
P: Qual o resultado do programa abaixo?

R: O resultado pode variar devido ao compilador e a plataforma que esteja rodando o programa.
Meu notebook o tamanho do int é 4 bytes e do char é 1 byte. Logo, no mínimo o tamanho final deverá conter 
9 bytes. Porém, para ter certeza, é necessário executar o programa e o resultado impresso foi 12 bytes.


*/
#include <stdio.h>

typedef struct
{
    int x, y;
    char c;
} t_ponto;

int main()
{

    printf("%d bytes\n", sizeof(t_ponto));
    return 0;
}

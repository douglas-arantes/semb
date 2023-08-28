#include <stdio.h>

int main() {

    int n = 0, m = 0;

    // Receber valores n, m
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Digite o valor de m: ");
    scanf("%d", &m);

    // Verificar se n <= m
    if (!(n <= m)) 
    {
        printf("n não é menor ou igual a m! \n");
        return -1;
    }

    int v1[n];
    int v2[m];

    for(int i = 0; i < n; i++)
    {
        printf("Digite o #%d número de v1: ", i+1);
        scanf("%d", &v1[i]);
    }     

    for(int i = 0; i < m; i++)
    {
        printf("Digite o #%d número de v2: ", i+1);
        scanf("%d", &v2[i]);
    }

    int count = 0;

    for (int i = 0; i <= m - n; i++) {

        int match = 1;

        for (int j = 0; j < n; j++) {
            if (v2[i + j] != v1[j]) {
                match = 0;
                break;
            }
        }

        if (match) {
            count++;
        }
    }

    printf("Resultado = %d\n", count);

    return 0;
}

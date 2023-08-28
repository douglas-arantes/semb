#include <stdio.h>

float calculate_avg(float vect[], int vect_size)
{
    float sum = 0;

    for (int i = 0; i < vect_size; i++)
    {
        sum  += vect[i];
    }

    return sum / vect_size;
}

int main()
{
    int vect_size = 10;
    float vect[vect_size];

    for (int i = 0; i < vect_size; i++)
    {
        printf("Digite o %d# número: ", i+1);
        scanf("%f", &vect[i]);
    }

    float avg = calculate_avg(vect, vect_size);
    printf("Valor da média = %.2f\n", avg);

    return 0;   
}

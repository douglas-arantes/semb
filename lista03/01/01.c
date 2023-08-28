#include <stdio.h>

int main()
{
    int vector_size = 10;
    int vector[vector_size];

    int greatest_num_position = 0;

    for (int i = 0; i < vector_size; i++)
    {
        printf("Digite o #%d número: ", i+1);
        scanf("%d", &vector[i]);

        if (vector[greatest_num_position] < vector[i]) greatest_num_position = i;
    }

    printf("A posição do maior elemento é: %d\n", greatest_num_position);
    printf("Maior elemento: %d\n", vector[greatest_num_position]);

}
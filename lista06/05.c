#include <stdio.h>

typedef struct hm {
    int horas;
    int minutos;
} t_hm;

t_hm converterMinutosParaHorasMinutos(int minutos) {
    t_hm resultado;

    resultado.horas = minutos / 60;
    resultado.minutos = minutos % 60;

    return resultado;
}

int main() {
    int minutos;
    t_hm resultado;

    printf("Digite um numero de minutos: ");
    scanf("%d", &minutos);

    resultado = converterMinutosParaHorasMinutos(minutos);

    printf("%d minutos equivalem a %d horas e %d minutos.\n", minutos, resultado.horas, resultado.minutos);

    return 0;
}

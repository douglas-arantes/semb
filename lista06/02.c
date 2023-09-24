#include <stdio.h>

struct data
{
    int dia;
    int mes;
    int ano;
};

int e_ano_bissexto(int ano)
{
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int dias_no_mes(int mes, int ano)
{
    // Retorna o número de dias em um mês em um determinado ano
    int dias_mes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mes == 2 && e_ano_bissexto(ano))
        return 29;
    else
        return dias_mes[mes];
}

int dias_desde_referencia(struct data data)
{
    int dias = 0;
    for (int ano = 1800; ano < data.ano; ano++)
    {
        if (e_ano_bissexto(ano))
            dias += 366;
        else
            dias += 365;
    }
    for (int mes = 1; mes < data.mes; mes++)
    {
        dias += dias_no_mes(mes, data.ano);
    }
    dias += data.dia - 1; // Subtrai 1 porque o primeiro dia é 0
    return dias;
}

int diferenca_dias(struct data data_inicial, struct data data_final)
{
    int dias_inicial = dias_desde_referencia(data_inicial);
    int dias_final = dias_desde_referencia(data_final);
    return dias_final - dias_inicial;
}

int main()
{
    struct data data_inicial;
    struct data data_final;

    printf("Digite a data inicial (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &data_inicial.dia, &data_inicial.mes, &data_inicial.ano);

    printf("Digite a data final (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &data_final.dia, &data_final.mes, &data_final.ano);

    int diferenca = diferenca_dias(data_inicial, data_final);

    printf("Quantidade de dias entre as duas datas eh %d\n", diferenca);

    return 0;
}

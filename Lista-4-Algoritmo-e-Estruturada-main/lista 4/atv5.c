#include <stdio.h>

int main() {
    int num_carros_vendidos;
    float valor_total_vendas, salario_fixo, valor_por_carro, salario_final;

    printf("Digite o número de carros vendidos: ");
    scanf("%d", &num_carros_vendidos);

    printf("Digite o valor total de vendas: ");
    scanf("%f", &valor_total_vendas);

    printf("Digite o salário fixo: ");
    scanf("%f", &salario_fixo);

    printf("Digite o valor recebido por carro vendido: ");
    scanf("%f", &valor_por_carro);

    salario_final = salario_fixo + num_carros_vendidos * valor_por_carro + 0.05 * valor_total_vendas;

    printf("O salário final do vendedor é: R$ %.2f\n", salario_final);

    return 0;
}


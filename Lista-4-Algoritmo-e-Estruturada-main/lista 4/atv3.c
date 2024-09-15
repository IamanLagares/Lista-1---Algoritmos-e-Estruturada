#include <stdio.h>

int main() {
    float salarioAtual, percentualReajuste, novoSalario;

    printf("Digite o salário mensal atual do funcionário: ");
    scanf("%f", &salarioAtual);

    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);

    novoSalario = salarioAtual * (1 + percentualReajuste / 100);

    printf("O novo salário do funcionário é: R$ %.2f\n", novoSalario);

    return 0;
}


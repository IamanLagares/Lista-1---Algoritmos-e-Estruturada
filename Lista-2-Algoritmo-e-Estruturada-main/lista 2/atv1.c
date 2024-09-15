#include <stdio.h>
#include <math.h>

#define LITROS_POR_LATA 2
#define CONSUMO_POR_METRO_QUADRADO 0.3

int main() {
    float largura, altura;
    int qtd_latas;

    printf("Digite a largura da parede em metros: ");
    scanf("%f", &largura);

    printf("Digite a altura da parede em metros: ");
    scanf("%f", &altura);

    float area = largura * altura;
    float qtd_tinta = area * CONSUMO_POR_METRO_QUADRADO;
    qtd_latas = ceil(qtd_tinta / LITROS_POR_LATA);

    printf("Serão necessárias %d latas de tinta para pintar a parede.\n", qtd_latas);

    return 0;
}


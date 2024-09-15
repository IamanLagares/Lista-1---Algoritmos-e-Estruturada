#include <stdio.h>

int main() {
	
    float custo, frete, despesas, venda, lucro;
    
    printf("Digite o custo da mercadoria: ");
    scanf("%f", &custo);
    
    printf("Digite o valor do frete: ");
    scanf("%f", &frete);
    
    printf("Digite as despesas eventuais: ");
    scanf("%f", &despesas);
    
    venda = custo + frete + despesas;
    
    printf("Digite o valor de venda: ");
    scanf("%f", &venda);
    
    lucro = ((venda - custo) / custo) * 100;
    
    printf("Porcentagem de lucro: %.2f%%\n", lucro);
    
    return 0;
}


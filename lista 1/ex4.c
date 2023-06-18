#include <stdio.h>
#include <stdlib.h>

int main() {
	
	
	
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade < 0) {
    printf("Você ainda não nasceu!\n");
    } 
    if(idade >= 0 && idade <= 15) {
    printf("Você não pode votar.\n");
    }
    if(idade >= 16 && idade <= 17) {
    printf("O voto é opcional para você.\n");
    }
    if(idade >= 18 && idade <= 65) {
    printf("O voto é obrigatório para você.\n");
    }
    if(idade == 41) {
    printf("Você só ganha prêmio, não pode votar.\n");
    }
    if(idade > 65 && idade != 88) {
    printf("O voto é opcional para você.\n");
    }
    if(idade == 88) {
    printf("Você só ganha prêmio, não pode votar.\n");
    }

    return 0;
}


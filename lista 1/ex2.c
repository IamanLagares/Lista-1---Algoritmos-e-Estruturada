#include <stdio.h>
#include <stdlib.h>

int main() {
		
	
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade < 30) {
        printf("Você é muito jovem!\n");
    }

    return 0;
}


#include <stdio.h>
#include <string.h>

void configurar_referencia(char nome[]) {
    int i;
    int len = strlen(nome);
    int sobrenome_inicio = 0;

 
    for (i = len - 1; i >= 0; i--) {
        if (nome[i] == ' ') {
            sobrenome_inicio = i + 1;
            break;
        }
    }

    for (i = sobrenome_inicio; nome[i] != '\0'; i++) {
        printf("%c", toupper(nome[i]));
    }

    printf(", ");

    for (i = 0; i < sobrenome_inicio; i++) {
        if (i == 0 || nome[i - 1] == ' ') {
            printf("%c. ", toupper(nome[i]));
        }
    }

    printf("\n");
}

int main() {
    char nome[100];

    printf("Digite o nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    configurar_referencia(nome);

    return 0;
}


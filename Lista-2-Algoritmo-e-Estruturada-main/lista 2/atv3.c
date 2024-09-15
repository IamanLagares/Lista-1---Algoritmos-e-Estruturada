#include <stdio.h>

int main() {
    int anos, meses, dias, idadeDias;

    printf("Digite a idade em anos, meses e dias (exemplo: 25 6 15): ");
    scanf("%d %d %d", &anos, &meses, &dias);

    idadeDias = anos * 365 + meses * 30 + dias;

    printf("A idade em dias é: %d dias\n", idadeDias);

    return 0;
}


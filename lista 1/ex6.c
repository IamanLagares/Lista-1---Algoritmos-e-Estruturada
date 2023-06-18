
#include <stdio.h>

float le_valida_media() {
    float media;

    do {
        printf("Informe a nota: ");
        scanf("%f", &media);
        if (media < 0 || media > 10) {
            printf("Nota inválida. Informe uma nota entre 0 e 10.\n");
        }
    } while (media < 0 || media > 10);

    return media;
}

void cabecalho() {
    printf("------------------\n");
    printf("Relatório da turma\n");
    printf("------------------\n");
}

void rodape(float media_turma, float menor_nota, int reprovados, int aprovados) {
    printf("------------------\n");
    printf("Média da turma: %.1f\n", media_turma);
    printf("Menor nota: %.1f\n", menor_nota);
    printf("Reprovados: %d\n", reprovados);
    printf("Aprovados: %d\n", aprovados);
    printf("------------------\n");
    printf("    BSB - 2023\n");
}

float calcular_media(int quantidade_medias, float soma_medias) {
    if (quantidade_medias > 0) {
        return soma_medias / quantidade_medias;
    } else {
        return 0;
    }
}

int main() {
    int quantidade_medias = 0;
    float soma_medias = 0;
    float menor_nota = 10;
    int reprovados = 0;
    int aprovados = 0;
    float media;

    cabecalho();

    while (quantidade_medias < 25) {
        media = le_valida_media();
        soma_medias += media;
        quantidade_medias++;

        if (media < menor_nota) {
            menor_nota = media;
        }

        if (media < 6.9) {
            reprovados++;
        } else {
            aprovados++;
        }
    }

    float media_turma = calcular_media(quantidade_medias, soma_medias);

    rodape(media_turma, menor_nota, reprovados, aprovados);

    return 0;
}


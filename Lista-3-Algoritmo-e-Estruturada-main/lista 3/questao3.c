#include <stdio.h>

int main() {
   int num;

   printf("Digite um número inteiro: ");
   scanf("%d", &num);

   if (num % 2 == 0) {
      printf("%d é um número par", num);
   } else {
      printf("%d é um número ímpar", num);
   }

   return 0;
}


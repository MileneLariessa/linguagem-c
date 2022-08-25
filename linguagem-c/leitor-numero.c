#include <stdio.h>

int main() {

int numero, antecessor, sucessor;

printf("Digite o número desejado:\t");
scanf("%d", &numero);
printf("Número escolhido é: %d\n", numero);
  antecessor = numero - 1;
  sucessor = numero + 1;
printf("O número antecessor é: %d\n", antecessor);
printf("O número sucessor é: %d\n", sucessor);
return 0;
}
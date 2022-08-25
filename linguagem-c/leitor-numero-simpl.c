#include <stdio.h>

int main() {
  
  int numero;

  printf("Digite o número desejado:\t");
  scanf("%d", &numero);

  printf("O número escolhido foi: %d. Seu antecessor é: %d e seu sucessor é %d", numero, numero -1, numero +1);
  
  return 0;
}
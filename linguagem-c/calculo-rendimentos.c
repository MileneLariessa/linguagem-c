#include <stdio.h>

int main(void) {

  float valorDeposito, taxaJuros, rendimento;

  printf("Informe o valor de depósito: ");
  scanf("%f", &valorDeposito);

  printf("Informe a taxa de juros: ");
  scanf("%f", &taxaJuros);

  taxaJuros = taxaJuros / 100;

  rendimento = valorDeposito * taxaJuros;

  printf("Seu rendimento será de: R$ %.2f, e seu valor total será de: R$ %.2f", rendimento, valorDeposito + rendimento);
}
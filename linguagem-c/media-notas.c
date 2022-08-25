#include <stdio.h>

int main(void) {

  float n1, n2, n3, n4, media;

  printf("Informe a primeira nota: ");
  scanf("%f", &n1);

  printf("Informe a segunda nota: ");
  scanf("%f", &n2);

  printf("Informe a terceira nota: ");
  scanf("%f", &n3);

  printf("Informe a quarta nota: ");
  scanf("%f", &n4);

  media = (n1+n2+n3+n4)/4;

  printf("A média das notas é: %.1f", media);
  
  return 0;
  
  // Na impressão do resultado na tela, utilizei o %.1f para 
  // considerar apenas uma casa decimal.
}
#include <stdio.h>
#include <math.h>

int main(void) {

  int n1, n2, resultado;
  
  printf("Informe o primeiro número: ");
  scanf("%d", &n1);
  
  printf("Informe o segundo número: ");
  scanf("%d", &n2);

  resultado = pow(n1, n2);

  printf("A potência de %d elevado a %d é igual a: %d", n1, n2, resultado);
  
  return 0;
}

//Utilizei a função "pow", da biblioteca "math.h" que possui funções para operações matemáticas. 
//No caso, a função "pow" calcula o resultado do primeiro número elevado ao segundo.
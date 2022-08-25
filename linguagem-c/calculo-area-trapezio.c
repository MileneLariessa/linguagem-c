#include <stdio.h>

int main() {

float baseMaior, baseMenor, altura, resultado;

printf("Informe a base maior do trapézio: ");
scanf("%f", &baseMaior);

printf("Informe a base menor do trapézio: ");
scanf("%f", &baseMenor);

printf("Informe a altura do trapézio: ");
scanf("%f", &altura);

resultado = ((baseMaior + baseMenor) * altura)/2;

printf("A área calculada do trapézio é igual a: %.1f", resultado);

return 0;

}
#include <stdio.h>

void calculoImc(float peso, float altura, float *imc){
  *imc = peso / (altura * altura);
}

int main(){
  float peso, altura, imc;
  
  printf("Digite seu peso\n");
  scanf("%f",&peso);
  printf("Digite sua altura\n");
  scanf("%f",&altura);
  calculoImc(peso, altura, &imc);

  printf("Seu IMC é %f", imc); 

  //Categorização do IMC 

  if (imc >= 18.5 && imc <= 24.9) {
      printf("\nNORMAL");
  }

  else if (imc >= 25.0 && imc <= 29.9){
      printf("\nSOBREPESO");
  }

  else if (imc >= 30.0 && imc <= 39.9){
      printf("\nOBESIDADE");
  }
  
  else {
      printf("\nOBESIDADE GRAVE");
  }
}
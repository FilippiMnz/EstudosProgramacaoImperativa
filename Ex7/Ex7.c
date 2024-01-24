// algoritmo que calcula a conversão de celcius para fahrenheit, rebendo uma entrada e tendo uma saida
#include <stdio.h>
int main()
{
  float celcius; //inicialização de variavel
  printf("Insira a temperatura em Celcius para a conversao: \n");
  scanf("%f", &celcius); // entrada de dado
  //regra de conversão (celcius × 9/5) + 32
  float fahrenheit = (celcius * 9/5) +32; // calculo de conversão
  printf("Sua temperatura convertida em Fahrenheit é %0.2f \n", fahrenheit); // imprime a saida 
}

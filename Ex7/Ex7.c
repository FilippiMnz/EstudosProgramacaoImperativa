#include <stdio.h>
int main()
{
  float celcius;
  printf("Insira a temperatura em Celcius para a conversao: \n");
  scanf("%f", &celcius);
  //regra de conversão (celcius × 9/5) + 32
  float fahrenheit = (celcius * 9/5) +32;
  printf("Sua temperatura convertida em Fahrenheit é %0.2f \n", fahrenheit);
}

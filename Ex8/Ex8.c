#include <stdio.h>
int main()
{
 float largura, comprimento;
 printf("Digite a largura do triangulo: \n");
 scanf("%f", &largura);
 printf("Digite o comprimento do Triangulo: \n");
 scanf("%f", &comprimento);
 // Regra para calculo da area triangulo
 float area = comprimento * largura;
 printf("A area do retangulo é de %0.2f metros quadrados \n", area);
}

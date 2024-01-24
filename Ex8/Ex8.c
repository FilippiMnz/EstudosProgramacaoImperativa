// algoritmo que calcula a area de um triangulo, recebendo 2 entradas e tendo uma saida
#include <stdio.h>
int main()
{
 float largura, comprimento; // inicialização de variaveis 
 printf("Digite a largura do triangulo: \n");
 scanf("%f", &largura); // entrada de dado1 largura
 printf("Digite o comprimento do Triangulo: \n");
 scanf("%f", &comprimento); // entrada de dado2 comprimento
 // Regra para calculo da area triangulo
 float area = comprimento * largura; // calculo da area, multiplicando comprimento pela largura
 printf("A area do retangulo é de %0.2f metros quadrados \n", area); // saida de dados
}

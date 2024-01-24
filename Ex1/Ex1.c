// algoritimo que recebe um valor qualquer e retorna seu sucessor e antecessor
#include <stdio.h>
int main()
{
  int NumberClient; // inicialização da variavel que receberá o dado do Client
  printf("Digite Um numero Qualquer: \n"); //recebe o dado 
  scanf("%d", &NumberClient); // armazena o dado
  int NumberDecre = NumberClient - 1; // Decrementa o Dado em Uma unidade para retornar seu antecessor
  int NumberIncre = NumberClient + 1; // Incremente o dado em Uma unidade para retornar seu Sucessor
  printf("O suvessor e antessesor do seu numero sao respectivamente: %d %d", NumberIncre, NumberDecre); // Imprime os valores para o Client
  return 0;
}

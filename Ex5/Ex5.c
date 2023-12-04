#include <stdio.h>
int main()
 {
 float velocidade, distancia;
 printf("Insira a distancia pretendida para o exercicio Em Metros: \n");
 scanf("%f", &distancia);
 printf("Insira a Velocidade esperada para a execução em Km: \n");
 scanf("%f", &velocidade);
 float tempo = distancia/velocidade;
 printf("Voce levara em media %0.2f minutos para chegar ao seu destino", tempo);
 } 

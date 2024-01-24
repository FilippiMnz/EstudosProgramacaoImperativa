// algoritmo que calcula o tempo, recebendo a entrada de 2 dados(velocidade e distancia) do cliente e retornando uma saida(tempo)
#include <stdio.h>
int main()
 {
 float velocidade, distancia; // inicialização de variaveis 
 printf("Insira a distancia pretendida para o exercicio Em Metros: \n");
 scanf("%f", &distancia); // guarda distancia
 printf("Insira a Velocidade esperada para a execução em Km: \n");
 scanf("%f", &velocidade); // guarda velocidade
 float tempo = distancia/velocidade; // calcula o tempo dividindo a distancia pela velocidade 
 printf("Voce levara em media %0.2f minutos para chegar ao seu destino", tempo); // imprime a saida(tempo) para o cliente
 } 

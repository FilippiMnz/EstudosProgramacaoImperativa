// algoritimo que faz o cambio de reais para dolar 
#include <stdio.h>
int main()
{
float real; // inicialização de variavel para receber o real
printf("Insira A quantidade de Reais para o cambio: \n");
scanf("%f", &real); // guarda o dado da moeda do cliente
float doleta = 0.2; // taxa de cambio dolar
float convert = doleta*real; // calculo de conversão
printf("Voce possui um Total de %0.2f doletas", convert); // imprime o resultado para o cliente
return 0;
}

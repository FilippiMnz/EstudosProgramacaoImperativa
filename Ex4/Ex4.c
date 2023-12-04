#include <stdio.h>
int main()
{
float real;
printf("Insira A quantidade de Reais para o cambio: \n");
scanf("%f", &real);
float doleta = 0.2;
float convert = doleta*real;
printf("Voce possui um Total de %0.2f doletas", convert);
return 0;
}

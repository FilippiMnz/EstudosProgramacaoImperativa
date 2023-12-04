#include <stdio.h>
int main()
{
 float pesoAtual, pesoIdeal, perda;
 int dias = 0;
 printf("Insira o Seu peso atual em kg: \n");
 scanf("%f", &pesoAtual);
printf("Insira o seu Peso Ideal Em kg: \n");
scanf("%f", &pesoIdeal);
printf("digite a perda mensal em kg: \n");
scanf("%f", &perda);
 if(pesoAtual <= pesoIdeal)
 {
	 printf("Voce ja se encontra abaixo ou exatamente no peso ideal. \n");
 } else
 {
 while(pesoAtual > pesoIdeal) 
   {
   pesoAtual -= perda;
   dias++;
   }
   printf("Serão necessarios %d dias para alcançar o peso ideal. \n", dias);
 }
 return 0;
}

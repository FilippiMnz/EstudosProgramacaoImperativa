// algoritimo para Calular o Numero de Dias para alcançar o peso ideal, rebendo 3 dados do client e retornando o numero de dias
#include <stdio.h>
int main()
{
 float pesoAtual, pesoIdeal, perda; // inicialização de variaveis vazias
 int dias = 0;
 printf("Insira o Seu peso atual em kg: \n");
 scanf("%f", &pesoAtual);
printf("Insira o seu Peso Ideal Em kg: \n");
scanf("%f", &pesoIdeal);
printf("digite a perda mensal em kg: \n");
scanf("%f", &perda);
 if(pesoAtual <= pesoIdeal) // verificação se o peso ja está no ideal ou está abaixo
 {
	 printf("Voce ja se encontra abaixo ou exatamente no peso ideal. \n");
 } else
 {
 while(pesoAtual > pesoIdeal)  // caso esteja acima do ideal, executará um loop, Enquanto(while) o peso atual for maior que o ideal
   {
   pesoAtual -= perda;
   dias++;
   }
   printf("Serão necessarios %d dias para alcançar o peso ideal. \n", dias); // retorna a quantidade de Dias 
 }
 return 0;
}

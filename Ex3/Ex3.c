// algoritmo que calcula os anos que deverão ser tomadas doses de vacinas, de 4 doses
#include <stdio.h>
int main()
{
 int Doses, Ano; // inicialização de variavel 
 printf("Insira o Ano da Primeira Dose \n");
 scanf("%d", &Ano);
 printf("Insira o periodo de tempo entre as doses: \n");
 scanf("%d", &Doses);
 printf("Eis os anos das proximas doses: \n");
   for(int i = 1; i < 4; i++) // laço de for que para todo i = 1, enquanto ir for menor a 4 ele multiplica o i pela quantidade de doses e soma com o ano atual e retorna o da proxima dose
 {
   printf("%d \n", Ano + (i * Doses));	
 }
   return 0;
}

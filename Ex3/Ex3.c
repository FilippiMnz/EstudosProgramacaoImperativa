#include <stdio.h>
int main()
{
 int Doses, Ano;
 printf("Insira o Ano da Primeira Dose \n");
 scanf("%d", &Ano);
 printf("Insira o periodo de tempo entre as doses: \n");
 scanf("%d", &Doses);
 printf("Eis os anos das proximas doses: \n");
   for(int i = 1; i < 4; i++)
 {
   printf("%d \n", Ano + (i * Doses));	
 }
   return 0;
}

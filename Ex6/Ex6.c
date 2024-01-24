// algoritmo que gera uma tabuada A partir do Zero, de um numero fornecido pelo cliente
#include <stdio.h>
int main()
{
 int number, i; // inicialização de Duas variaveis, number, que será inserida pelo cliente e i que será fornecida no for
 printf("Insira um numero para demonstrarmos a Tabuada do mesmo: \n");
 scanf("%d", &number);
 printf("A tabuada do Numero %d: \n", number);
 for( i = 0; i <=10; i++)  // laço de para(for) todo numero menor que 10(o laço inicia no 0( i = 0), incrementa o i em 1 e executa o modulo de for em loop ate chegar a 10
 {
 printf("%d x %d = %d \n", number, i, number * i); // exibe o numero fornecido pelo cliente multiplicado pelo i
 }
 return 0;
}

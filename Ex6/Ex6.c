#include <stdio.h>
int main()
{
 int number, i;
 printf("Insira um numero para demonstrarmos a Tabuada do mesmo: \n");
 scanf("%d", &number);
 printf("A tabuada do Numero %d: \n", number);
 for( i = 1; i <=10; i++) 
 {
 printf("%d x %d = %d \n", number, i, number * i);
 }
 return 0;
}

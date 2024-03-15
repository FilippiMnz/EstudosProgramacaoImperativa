/*
Maria está fazendo a “Dieta de Saturno” para
emagrecimento e a previsão é de que a perda de peso
seja de 5 kg mensais. Ajustar programa em C para ler o
peso inicial e o peso almejado, exibir o peso alcançado
(em teoria) a cada mês, conforme o que prevê a dieta, e
corrigir os erros que ocorrem quando o peso almejado
não é múltiplo de 5, bem como quando o peso inicial é
menor que o peso almejado. Aplicar for.
*/

#include <stdio.h>
#include <math.h>
int main(){
    float pesoInicial, pesoAlmejado;
    printf("--------Dieta Saturno-------- \n");
    printf("----Perca de 5kg mensais----- \n");
    printf("Digite o seu peso atual: ");
    scanf("%f", &pesoInicial);

    //loop para garantia do numero digitado pelo usuario ser multiplo de 5
    for(;;){ // o uso do ;; permite criar um loop sem parada definida
        printf("Digite o peso almejado Em KG: ");
        scanf("%f", &pesoAlmejado);

        if (pesoAlmejado == 0) { // Se o peso almejado for zero, exibir erro e solicitar novo valor
            printf("Erro: O peso almejado não pode ser zero.\n");
            continue;
        }if(pesoAlmejado > pesoInicial){ // Se o peso almejado for maior que o inicial, exibe erro e solicita um novo valor
            printf("ERRO: O peso Almejado deve ser menor que o peso atual \n");
           continue;
        }

        int multiplo = round(pesoAlmejado / 5) *5; 
        // aredonda o numero do cliente para que va para o multiplo de 5 mais proximo dele
        // a função round arredonda o número float para o valor inteiro mais próximo
        printf("Peso almejado arredondado para o múltiplo de 5 mais próximo: %d kg\n", multiplo);

        if((int)multiplo % 5 == 0){
            pesoAlmejado = multiplo;
            break; // se for multiplo de 5 ele vai sair do loop
        }   
    }
    printf("\nMes Peso Alcançado\n");

    for(int mes = 1; pesoInicial > pesoAlmejado; mes ++){ //loop para exibir a tabela
        pesoInicial -= 5; //perde 5kg a cada mês
        printf("%d\t%.1f kg\n", mes, pesoInicial);
    }
    return 0; 
}
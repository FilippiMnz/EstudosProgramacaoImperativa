#include <stdio.h>
#include <math.h>
int main(){
    float pesoInicial, pesoAlmejado;
    printf("Digite o seu peso atual: \n");
    scanf("%f", &pesoInicial);

    //loop para garantia do numero digitado pelo usuario ser multiplo de 5
    for(;;){ // o uso do ;; permite criar um loop sem parada definida
        printf("Digite o peso almejado, Em kg(multiplo de 5): \n");
        scanf("%f", &pesoAlmejado);

        if (pesoAlmejado == 0) { // Se o peso almejado for zero, exibir erro e solicitar novo valor
            printf("Erro: O peso almejado não pode ser zero.\n");
            continue;
        }

        int multiplo = round(pesoAlmejado / 5) *5; // aredonda o numero do cliente para que va para o multiplo de 5 mais proximo dele
        printf("Peso almejado arredondado para o múltiplo de 5 mais próximo: %d kg\n", multiplo);

        if((int)multiplo % 5 == 0){
            pesoAlmejado = multiplo;
            break; // se for multiplo de 5 ele vai sair do loop
        }
        printf("Erro, o Peso almejado precisa ser multiplo de 5. \n");    
    }
    if(pesoAlmejado > pesoInicial){
        printf("Erro: O peso almejado deve ser maior que o peso Inicial. \n");
        return 1;
    }
    printf("\nMes\tPeso Alcançado\n");

    for(int mes = 1; pesoInicial > pesoAlmejado; mes ++){
        pesoInicial -= 5;
        printf("%d\t%.1f kg\n", mes, pesoInicial);
    }
    return 0; 
}
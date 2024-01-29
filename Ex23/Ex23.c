#include <stdio.h>

int main() {
    float peso, altura, imc;
    // Solicita ao usuário o peso e a altura
    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);
    // Calcula o Índice de Massa Corporal (IMC)
    imc = peso / (altura * altura); 
    // Determina o tipo de obesidade
    if (imc < 18.5) {
        printf("IMC: %.2f - Abaixo do peso\n", imc);
    } else if (imc < 24.9) {
        printf("IMC: %.2f - Peso normal\n", imc);
    } else if (imc < 29.9) {
        printf("IMC: %.2f - Sobrepeso\n", imc);
    } else if (imc < 34.9) {
        printf("IMC: %.2f - Obesidade grau I\n", imc);
    } else if (imc < 39.9) {
        printf("IMC: %.2f - Obesidade grau II\n", imc);
    } else {
        printf("IMC: %.2f - Obesidade grau III\n", imc);
    }
    return 0;
}

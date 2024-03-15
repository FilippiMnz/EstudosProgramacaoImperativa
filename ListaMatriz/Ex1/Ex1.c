#include <stdio.h>
#include <stdlib.h>

float M[4][6] = { {385,534,309,546,503,477},
                {12, 121, 12, 3, 24, 12},
                {35.9, 72.1, 46.2,74.3,78,90},
                {-28, -18, -18, -18, -22, -18} };

int Frz, Crc;

void ExibeMatriz(float Matriz[][6], int L, int C) {
    system("color 70");
    printf("                      Deia   Sul  NSul  Frio   Fri   Lux \n");
    for (int i = 0; i < L; i++) {
        if (i == 0) printf("Capacidade (litros) ");
        if (i == 1) printf("Garantia (meses)    ");
        if (i == 2) printf("Economia (KWh/mes)  ");
        if (i == 3) printf("Temperatura Min (C) ");
        for (int j = 0; j < C; j++)
            printf("%6.1f", Matriz[i][j]);
        printf("\n");
    }
};

void ExibeColuna(float Matriz[][6], int L, int C) {
    system("color 70");
    for (int i = 0; i < L; i++) {
        if (i == 0) printf("Capacidade (litros) ");
        if (i == 1) printf("Garantia (meses)    ");
        if (i == 2) printf("Economia (KWh/mes)  ");
        if (i == 3) printf("Temperatura Min (C) ");
        printf("%6.1f\n", Matriz[i][C]);
    }
}

void ExibeLinha(float Matriz[][6], int L, int C) {
    system("color 70");
    printf("Deia   Sul  NSul  Frio   Fri   Lux \n");
    for (int i = 0; i < C; i++)
        printf("%.1f ", Matriz[L][i]);
    printf("\n");
}

void SelecionaFreezer(float Matriz[][6], int* F) {
    system("color 70");
    printf("Selecione o freezer desejado:\n");
    printf("1 - Deia\n");
    printf("2 - Sul\n");
    printf("3 - NSul\n");
    printf("4 - Frio\n");
    printf("5 - Fri\n");
    printf("6 - Lux\n\n");
    printf("Opcao: ");
    int Op;
    scanf("%d", &Op);
    *F = Op - 1;
};

void SelecionaCaracteristica(float Matriz[][6], int* C) {
    system("color 70");
    system("cls");
    printf("Caracteristica desejado\n");
    printf("1 - Capacidade (litros)\n");
    printf("2 - Garantia (meses)\n");
    printf("3 - Economia(kWh/mes)\n");
    printf("4 - Temperatura Minima (Celsius)\n");
    printf("Opcao: ");
    int Op;
    scanf("%d", &Op);
    *C = Op - 1;
};
    //OP4
void AlteraDado(float Matriz[][6], int Linha, int Coluna) {
    system("color 70");
    float novo_valor;
    printf("Digite o novo valor para a posição (%d, %d): ", Linha, Coluna);
    scanf("%f", &novo_valor);
    Matriz[Linha][Coluna] = novo_valor;
}
    //OP5
void MelhorFreezerCapacidade(float Matriz[][6]) {
    system("color 70");
    float max_capacidade = Matriz[0][0]; //inicia na possicao 00(linha 1 coluna 1) 
    int indice = 0;
    for (int i = 1; i < 6; i++) { //percorre as 6 colunas, quando tiver verificar todas e encontrar a maior ele a exibe
        if (Matriz[0][i] > max_capacidade) {
            max_capacidade = Matriz[0][i];
            indice = i;
        }
    }
    printf("Melhor Freezer em Capacidade:\n");
    ExibeColuna(Matriz, 4, indice);
}
    //OP6
void MelhorFreezerGarantia(float Matriz[][6]) {
    system("color 70");
    float max_garantia = Matriz[1][0];
    int indice = 0;
    for (int i = 1; i < 6; i++) {
        if (Matriz[1][i] > max_garantia) {
            max_garantia = Matriz[1][i];
            indice = i;
        }
    }
    printf("Melhor Freezer em Garantia:\n");
    ExibeColuna(Matriz, 4, indice);
}
    //OP7
void MelhorFreezerEconomia(float Matriz[][6]) {
    system("color 70");
    float min_economia = Matriz[2][0];
    int indice = 0;
    for (int i = 1; i < 6; i++) {
        if (Matriz[2][i] < min_economia) {
            min_economia = Matriz[2][i];
            indice = i;
        }
    }
    printf("Melhor Freezer em Economia:\n");
    ExibeColuna(Matriz, 4, indice);
}

    //OP8
void MelhorFreezerTemperatura(float Matriz[][6]) {
    float min_temperatura = Matriz[3][0];
    int indice = 0;
    for (int i = 1; i < 6; i++) {
        if (Matriz[3][i] < min_temperatura) {
            min_temperatura = Matriz[3][i];
            indice = i;
        }
    }
    printf("Melhor Freezer em Temperatura:\n");
    ExibeColuna(Matriz, 4, indice);
}

int main() {
    do {
        system("color 70"); //fundo branco-7 letra preta-0
        system("cls"); //limpa o console
        printf(">>> Pesquisa Freezer <<<\n\n");
        printf("Selecione a opcao desejada:\n");
        printf("1 - Exibir Levantamento\n");
        printf("2 - Dados de um Freezer\n");
        printf("3 - Dados de uma Caracteristica\n");
        printf("4 - Alterar Dado\n");
        printf("5 - Melhor Freezer em Capacidade\n");
        printf("6 - Melhor Freezer em Garantia\n");
        printf("7 - Melhor Freezer em Economia\n");
        printf("8 - Melhor Freezer em Temperatura\n");
        printf("9 - Sair\n");
        int Op;
        scanf("%d", &Op);
        switch (Op) {
        case 1: ExibeMatriz(M, 4, 6);
            system("pause");
            break;
        case 2: SelecionaFreezer(M, &Frz);
            ExibeColuna(M, 4, Frz);
            system("pause");
            break;
        case 3: SelecionaCaracteristica(M, &Crc);
            ExibeLinha(M, Crc, 6);
            system("pause");
            break;
        case 4: {
            system("cls");
            int linha, coluna;
            ExibeMatriz(M, 4, 6); //exibe a matriz para o usuario ter noção
            printf("Caro Usuario, Lembre-se que a matriz comeca a partir do 0");
            printf("\nDigite a linha e a coluna do dado a ser alterado: ");
            scanf("%d %d", &linha, &coluna);
            if (linha >= 0 && linha < 4 && coluna >= 0 && coluna < 6)
                AlteraDado(M, linha, coluna);
            else
                printf("Posição inválida na matriz.\n");
            break;
        }
        case 5: MelhorFreezerCapacidade(M);
            system("pause");
            break;
        case 6: MelhorFreezerGarantia(M);
            system("pause");
            break;
        case 7: MelhorFreezerEconomia(M);
            system("pause");
            break;
        case 8: MelhorFreezerTemperatura(M);
            system("pause");
            break;
        case 9: break;
        }
        if (Op == 9)
            break;
    } while (1);
    return 0;
}

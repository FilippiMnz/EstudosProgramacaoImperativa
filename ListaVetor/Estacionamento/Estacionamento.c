#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//uso de Define para definir as constantes do numero de vagas e da carga horaria do estacionamento
//boa pratica em C por facilitar a manutenção do codigo e por dar uma boa legibilidade
#define MAX_VAGAS 30 // tamanho maximo do estacionamento
#define MAX_HORAS 15 // 06:00 às 20:00 

//criação de um novo tipo de dado "carro" para simplicar a declaração de novas variaveis, segue as boas praticas ao fazer que so precise alterar dentro da estrutura
typedef struct {
    char placa[8];
    int horaEntrada;
    int minutoEntrada;
    float valorCobrado;
} Carro;

char Estaciona[MAX_VAGAS][14];
float ValorHora;
char Responsavel[21];
int Iniciou = 0;
//EX3 array auxiliar 
int CarrosPorHora[MAX_HORAS] = { 0 }; // Array para armazenar a quantidade de carros por hora
Carro carrosPagos[MAX_VAGAS]; // Array para armazenar os carros que já saíram do estacionamento


//Essa função descarta todos os caracteres presentes no buffer de entrada até que encontre uma nova linha,
//garantindo que o buffer esteja vazio antes de prosseguir com a execução
void LimparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

//função para abrir o caixa
void AbrirCaixa() {
    system("cls");
    system("color 70");
    printf("\n >>> Estacionamento <<< \n");
    printf(" >>>  Largas Vagas  <<< \n");
    printf("\n     ABRINDO  CAIXA \n");
    for (int i = 0; i < MAX_VAGAS; i++) //gera um loop que percorre em todas as vagas[MAX_VAGAS] e coloca o atributo LIVRE 
        strcpy(Estaciona[i], "LIVRE");
    printf("\nQual o valor do estacionamento por hora de uso? ");
    scanf("%f", &ValorHora);
    LimparBuffer();
    printf("Qual o nome do responsavel? ");
    fgets(Responsavel, sizeof(Responsavel), stdin);
    Responsavel[strcspn(Responsavel, "\n")] = '\0'; // Remove a quebra de linha do final
    memset(CarrosPorHora, 0, sizeof(CarrosPorHora)); // reinicia o array que recebe quantos carros passaram a cada hora
    Iniciou = 1;
}



void ClienteChega() {
    int Vaga;
    char Placa[8], Hora[6], Entrada[14];
    system("cls");
    system("color 70");
    printf("\n >>> Estacionamento <<< \n");
    printf(" >>>  Largas Vagas  <<< \n");
    printf("\n   CHEGADA DE CLIENTE \n");
    if (Iniciou) {
        printf("\n CAIXA ABERTO   Valor/h: %.2f", ValorHora);
        printf("\n Responsavel: %s\n\n", Responsavel);
        printf("Qual a vaga ocupada? ");
        scanf("%d", &Vaga);
        LimparBuffer();
        if (Vaga < 1 || Vaga > MAX_VAGAS) {
            printf("ERRO: Vaga invalida!\n");
            system("pause");
            return;
        }
        if (strcmp(Estaciona[Vaga - 1], "LIVRE") != 0) {
            printf("ERRO: A vaga selecionada esta ocupada!\n");
            system("pause");
            return;
        }
        printf("Qual a placa do veiculo [7 digitos]? ");
        fgets(Placa, sizeof(Placa), stdin);
        Placa[strcspn(Placa, "\n")] = '\0'; // Remove a quebra de linha do final
        strcpy(Entrada, Placa);
        LimparBuffer();
        printf("Qual a hora de entrada [formato hh:mm]? ");
        fgets(Hora, sizeof(Hora), stdin);
        Hora[strcspn(Hora, "\n")] = '\0'; // Remove a quebra de linha do final
        strcat(Entrada, "+");
        strcat(Entrada, Hora);
        strcpy(Estaciona[Vaga - 1], Entrada);

        //EX4
        // Extrair a hora de entrada para atualizar o array de contagem de carros por hora
        int horaEntrada = (Hora[0] - '0') * 10 + (Hora[1] - '0');
        if (horaEntrada >= 6 && horaEntrada < 21) // Verifica se a hora está dentro do horário de funcionamento do estacionamento
            CarrosPorHora[horaEntrada - 6]++;  // Atualiza a contagem de carros para a hora de entrada
            //O indice do carros por hora começa a partir do 0 por ser um array, então diminuimos A hora de entrada por 6, 6-6 = indice 0, e ficará ate os 20 - 6 = indice 14

        printf("Chegada registrada com sucesso!\n");
    }
    else
        printf("\nERRO: Antes eh preciso abrir o caixa!\n");
    system("pause");
}

void ClienteSai() {
    int Vaga;
    char Placa[8], Entrada[14], Hora[3], Min[3];
    int Hentrada, Mentrada, Hsaida, Msaida; // hora e minuto de entrada e saída
    float tempoPermanencia, valorCobrado, valorPago, troco;

    system("cls");
    system("color 70");
    printf("\n >>> Estacionamento <<< \n");
    printf(" >>>  Largas Vagas  <<< \n");
    printf("\n    SAIDA DE CLIENTE \n");
        //verificação se o caixa está aberto
    if (Iniciou) {
        printf("\n CAIXA ABERTO   Valor/h: %.2f", ValorHora);
        printf("\n Responsavel: %s\n\n", Responsavel);

        printf("Qual a vaga ocupada? ");
        scanf("%d", &Vaga);

        // Verificar se a vaga está livre
        if (strcmp(Estaciona[Vaga - 1], "LIVRE") == 0) { //vaga -1 para indicar a posição verdadeira dentro do array
            printf("ERRO: A vaga selecionada está livre!\n");
            system("pause");
            return;
        }

        // Obter a entrada correspondente à vaga selecionada
        strcpy(Entrada, Estaciona[Vaga - 1]);

        // Extrair a hora e o minuto de entrada
        Hora[0] = Entrada[8];
        Hora[1] = Entrada[9];
        Hora[2] = '\0';
        Hentrada = atoi(Hora); // converter string em inteiro
        Min[0] = Entrada[11];
        Min[1] = Entrada[12];
        Min[2] = '\0';
        Mentrada = atoi(Min); // converter string em inteiro

        // Obter a placa do veículo
        for (int i = 0; i < 7; i++)
            Placa[i] = toupper(Entrada[i]);

        Placa[7] = '\0'; // Terminar a string

        printf("Hora de entrada: %d:%d\n", Hentrada, Mentrada);
        printf("Placa: %s\n", Placa);
                                                                
            //Ex2
        // Obter o horário de saída do cliente
        printf("Qual o horário de saída? (formato hh:mm): ");
        scanf("%d:%d", &Hsaida, &Msaida);

        // Calcular o tempo de permanência
        tempoPermanencia = (Hsaida - Hentrada) + (Msaida - Mentrada) / 60.0;

        // Calcular o valor a ser cobrado
        valorCobrado = tempoPermanencia * ValorHora;
        printf("\nValor a ser cobrado: R$%.2f\n", valorCobrado);

        // Solicitar ao cliente o valor pago
        printf("Digite o valor pago pelo cliente: R$");
        scanf("%f", &valorPago);

        // Calculo do troco
        troco = valorPago - valorCobrado;
        printf("Troco: R$%.2f\n", troco);

        // Armazenar as informações do carro que saiu
        strcpy(carrosPagos[Vaga - 1].placa, Placa);
        carrosPagos[Vaga - 1].horaEntrada = Hentrada;
        carrosPagos[Vaga - 1].minutoEntrada = Mentrada;
        carrosPagos[Vaga - 1].valorCobrado = valorCobrado;

        // Libera a vaga
        strcpy(Estaciona[Vaga - 1], "LIVRE");
    }
    else
        printf("\nERRO: Antes eh preciso abrir o caixa!\n");

    system("pause");
}

void FecharCaixa() {
    float totalDia = 0.0; //incia a variavel em 0
    int contagemHora[MAX_HORAS] = { 0 }; //gera um array de tamanho 15, para receber os carros que entram em cada hora do dia
    system("cls");
    printf("\n >>> Estacionamento <<< \n");
    printf("\n    FECHAR CAIXA \n");

    // Processar os carros que ainda estão no estacionamento
    for (int i = 0; i < MAX_VAGAS; i++) {
        if (strcmp(Estaciona[i], "LIVRE") != 0) {
            // Extrair a hora de entrada do carro
            int HoraEntrada = (Estaciona[i][8] - '0') * 10 + (Estaciona[i][9] - '0');

            // Atualizar a contagem de carros para essa hora
            contagemHora[HoraEntrada - 6]++; // As horas estão indexadas de 6 a 20
        }
    }

    // Processar os carros que já saíram do estacionamento
    for (int i = 0; i < MAX_VAGAS; i++) {
        if (carrosPagos[i].placa[0] != '\0') { // Verificar se o carro pagou
            // Adicionar o valor cobrado ao total do dia
            totalDia += carrosPagos[i].valorCobrado;

            // Extrair a hora de entrada do carro
            int HoraEntrada = carrosPagos[i].horaEntrada;

            // Atualizar a contagem de carros para essa hora
            contagemHora[HoraEntrada - 6]++; // As horas estão indexadas de 6 a 20
        }
    }

    // Encontrar a hora com mais carros
    int maxCarros = 0;
    int horaMaxCarros = 6; //inicia as 6 horas
    for (int i = 0; i < MAX_HORAS; i++) {   
        if (contagemHora[i] > maxCarros) {
            maxCarros = contagemHora[i];
            horaMaxCarros = i + 6; // Adicionar 6 para obter a hora real
        }
    }

    // Exibir o total de dinheiro obtido no dia
    printf("\nTotal de dinheiro obtido no dia: R$%.2f\n", totalDia);

    // Exibir o relatorio com a quantidade de carros por hora 
    printf("\nQuantidade de carros em cada hora:\n");
    for (int i = 0; i < MAX_HORAS; i++) {
        printf("Hora %02d: %d carros\n", i + 6, contagemHora[i]);
    }

    // Exibir a hora com mais carros
    printf("\nHorario com mais carros: Hora %02d (%d carros)\n", horaMaxCarros, maxCarros);

    printf("\nCaixa fechado com sucesso!\n");
}

int main() {
    int Op;
    do {
        system("cls");
        system("color 70");
        printf("\n >>> Estacionamento <<< \n");
        printf(" >>>  Largas Vagas  <<< \n");
        printf("\n 1 - Abrir Caixa");
        printf("\n 2 - Chegada de Cliente");
        printf("\n 3 - Saida de Cliente");
        printf("\n 4 - Fechar Caixa");
        printf("\n\n Qual a opcao desejada? ");
        do {
            scanf("%d", &Op);
            if ((Op < 1) || (Op > 4)) {
                printf("\n ERRO: Opcao invalida!");
                printf("\n Qual a opcao desejada? ");
            }
            else
                break;
        } while (1);
        switch (Op) {
        case 1: AbrirCaixa();
            break;
        case 2: ClienteChega();
            break;
        case 3: ClienteSai();
            break;
        case 4:
            // Verificar se há carros dentro do estacionamento      EX3
            for (int i = 0; i < MAX_VAGAS; i++) {
                if (strcmp(Estaciona[i], "LIVRE") != 0) {
                    system("cls");
                    printf("AVISO: Existe um carro na vaga %d. O caixa nao pode ser fechado enquanto houver carros no estacionamento.\n", i + 1);
                    Op = 0; // Definir Op como 0 para manter o loop
                    system("pause");
                    break;
                }
            }
            if (Op != 0) // Se não houver carros no estacionamento, chama FecharCaixa
                FecharCaixa();
            break;
        }
    } while (Op != 4);

    return 0;
}
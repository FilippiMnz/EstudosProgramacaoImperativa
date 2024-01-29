
#include <stdio.h>

void ValidaCompra(float *L, int numeroCompra) {
    float D;
    printf("Debito para a compra %d: ", numeroCompra);
    scanf("%f", &D);

    if (*L - D >= 0) {
        printf("Compra %d possivel! \n", numeroCompra);
        *L = *L - D;
    } else {
        printf("Compra %d estourara o cartao! \n", numeroCompra);
    }

    printf("Limite restante: %.2f \n\n", *L);
}

int main() {
    float Limite;
    int numeroCompra = 1;

    printf("Limite do cartao: ");
    scanf("%f", &Limite);

    while (Limite > 0) {
        ValidaCompra(&Limite, numeroCompra);
        numeroCompra++;
    }

    printf("Seu limite de compras acabou!");
    return 0;
}

#include <stdio.h>

int main() {
    float valor_etiqueta, valor_pagar;
    int opcao_pagamento;

    printf("Informe o valor da etiqueta: ");
    scanf("%f", &valor_etiqueta);

    printf("Escolha a opcao de pagamento: \n");
    printf("1 - A vista em dinheiro (10%% de desconto)\n");
    printf("2 - A vista no cartao de credito (5%% de desconto)\n");
    printf("3 - Em duas vezes (preco normal)\n");
    printf("4 - Em tres vezes (10%% de juros)\n");
    scanf("%d", &opcao_pagamento);

    switch (opcao_pagamento) {
        case 1:
            valor_pagar = valor_etiqueta - (valor_etiqueta * 0.1);
            break;
        case 2:
            valor_pagar = valor_etiqueta - (valor_etiqueta * 0.05);
            break;
        case 3:
            valor_pagar = valor_etiqueta;
            break;
        case 4:
            valor_pagar = valor_etiqueta + (valor_etiqueta * 0.1);
            break;
        default:
            printf("Opcao de pagamento invalida.\n");
            return 1;
    }

    printf("Valor a pagar: %.2f\n", valor_pagar);
    return 0;
}

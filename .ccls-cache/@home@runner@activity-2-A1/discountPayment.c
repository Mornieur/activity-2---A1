#include <stdio.h>

int main() {
    float quantidade, preco_unitario, total, desconto;

    // Lendo a quantidade e o preço unitário do produto
    printf("Digite a quantidade adquirida: ");
    scanf("%f", &quantidade);
    printf("Digite o preço unitário: ");
    scanf("%f", &preco_unitario);

    // Calculando o total
    total = quantidade * preco_unitario;

    // Calculando o desconto
    if (quantidade <= 5) {
        desconto = preco_unitario * 0.02;
    } else if (quantidade <= 10) {
        desconto = preco_unitario * 0.03;
    } else {
        desconto = preco_unitario * 0.05;
    }

    // Calculando o total a pagar
    total -= desconto;

    // Imprimindo o resultado
    printf("Total a pagar: R$ %.2f", total);

    return 0;
}

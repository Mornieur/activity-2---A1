#include <stdio.h>

int main() {
    float altura, peso_ideal;
    char sexo;

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    printf("Digite seu sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo == 'M') {
        peso_ideal = (72.7 * altura) - 58;
        printf("Seu peso ideal é %.2f kg.\n", peso_ideal);
    } else if (sexo == 'F') {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal é %.2f kg.\n", peso_ideal);
    } else {
        printf("Sexo inválido. Digite M ou F.\n");
    }

    return 0;
}

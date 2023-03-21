#include <stdio.h>

int main() {
    int A, B, C;
    float media;

    printf("Digite o valor de A (entre 0 e 10): ");
    scanf("%d", &A);
    printf("Digite o valor de B (entre 0 e 10): ");
    scanf("%d", &B);
    printf("Digite o valor de C (entre 0 e 10): ");
    scanf("%d", &C);

    media = (float)(A + B + C) / 3;

    printf("A media eh: %.2f\n", media);

    if (media >= 7) {
        printf("Aprovado\n");
    } else if (media > 3) {
        printf("Exame\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}

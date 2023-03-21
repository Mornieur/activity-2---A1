#include <stdio.h>

int main() {
    float salario, salarioTotal;
    int horasTrabalhadas, horasExtras;
    const int horasSemanais = 40;
    const int semanasMes = 4;
    const float horaExtra = 1.5;

    // leitura dos dados
    printf("Digite o salário por hora: ");
    scanf("%f", &salario);

    printf("Digite a quantidade de horas trabalhadas no mês: ");
    scanf("%d", &horasTrabalhadas);

    // cálculo do salário total
    if (horasTrabalhadas > horasSemanais * semanasMes) {
        horasExtras = horasTrabalhadas - horasSemanais * semanasMes;
        salarioTotal = salario * horasSemanais * semanasMes + 
                       salario * horasExtras * horaExtra;
    } else {
        salarioTotal = salario * horasTrabalhadas;
    }

    // exibição do resultado
    printf("Salário total: R$%.2f\n", salarioTotal);

    return 0;
}

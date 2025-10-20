#include <stdio.h>
#include <stdlib.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    double larg, comp, valor, area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &larg);
    printf("Digite o comprimento do terreno: ");
    limpar_entrada();
    scanf("%lf", &comp);
    printf("Digite o valor do metro quadrado: ");
    limpar_entrada();
    scanf("%lf", &valor);

    area = comp * larg;
    preco = area * valor;

    printf("Area do terreno: %.2lf m2\n", area);
    printf("Preco do terreno: %.2lf\n", preco);

    return 0;
}


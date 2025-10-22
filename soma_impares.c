#include <stdio.h>

int main()
{
    int x, y, troca, soma=0;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &x, &y);

    if (x > y) {
        troca = x;
        x = y;
        y = troca;
    }

    for (int i = x+1; i < y; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    printf("Soma dos impares = %d\n", soma);

    return 0;
}

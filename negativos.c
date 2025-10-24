#include <stdio.h>

int main()
{
    int n, i;

    printf("Quantos numeros voce ira digitar? ");
    scanf("%d", &n);

    int vet[n];

    for (i = 0; i < n; i++) {
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &vet[i]);
    }

    printf("Numeros negativos:\n");
    for (i = 0; i < n; i++) {
        if (vet[i] < 0) {
            printf("%d \n", vet[i]);
        }
    }

    return 0;
}

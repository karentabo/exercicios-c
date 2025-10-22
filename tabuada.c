#include <stdio.h>

int main()
{
    int n, i=0;

    printf("Qual o valor da sua tabuada?: ");
    scanf("%d", &n);

    for (i = 0; i < 11; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

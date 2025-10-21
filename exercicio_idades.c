#include <stdio.h>
#include <string.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

int main()
{
    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    printf("Dados da primeira pessoa:\nNome: ");
    ler_texto(nome1, 50);
    printf("Idade: ");
    scanf("%d", &idade1);
    limpar_entrada();

    printf("Dados da segunda pessoa:\nNome: ");
    ler_texto(nome2, 50);
    printf("Idade: ");
    scanf("%d", &idade2);

    media = (idade1 + idade2) / 2.0;

    printf("A idade media entre %s e %s e de %.1lf", nome1, nome2, media);

    return 0;
}

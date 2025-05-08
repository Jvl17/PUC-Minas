#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char linha[1000];

    while (1) {
        fgets(linha, sizeof(linha), stdin);

        linha[strcspn(linha, "\n")] = '\0';

        if (strcmp(linha, "FIM") == 0) {
            break;
        }

        int contador = 0;

        for (int i = 0; linha[i] != '\0'; i++) {
            if (isupper(linha[i])) {
                contador++;
            }
        }

        printf("%d\n", contador);
    }

    return 0;
}
#include <stdio.h>

int main () {
    float temperatura, conversao;
    char escala, escala_desejada;

    printf("==================== CONVERSOR DE TEMPERATURAS ====================\n");
    printf("Insira os valores no formato abaixo:\n(TEMPERATURA) (ESCALA ATUAL) > (ESCALA DESEJADA)\nEx: 30 C > K\n");
    scanf("%f %c > %c", &temperatura, &escala, &escala_desejada);

    switch(escala_desejada) {
        case ('C'):
            if (escala == 'F') {
                conversao = ((temperatura - 32) / 1.8);
                printf("%.2f C", conversao);
                break;
            } else if (escala == 'K') {
                conversao = temperatura - 273.15;
                printf("%.2f C", conversao);
                break;
            }
        case ('F'):
            if (escala == 'C') {
                conversao = ((temperatura*1.8) + 32);
                printf("%.2f F", conversao);
                break;
            } else if (escala == 'K') {
                conversao = (((temperatura - 273.15)*1.8) + 32);
                printf("%.2f F", conversao);
                break;
            }
        case ('K'):
            if (escala == 'C') {
                conversao = temperatura + 273.15;
                printf("%.2f K", conversao);
                break;
            } else if (escala == 'F') {
                conversao = (((temperatura - 32) / 1.8) + 273.15);
                printf("%.2f K", conversao);
                break;
            }
    }
    return 0;
}

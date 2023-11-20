#include <stdio.h>

int main() {
    char resposta;
    
    do {
        int ano, mes, diasNoMes;

        
        printf("Digite o ano: ");
        scanf("%d", &ano);
        printf("Digite o mês (1-12): ");
        scanf("%d", &mes);

        
        if (mes < 1 || mes > 12) {
            printf("Mês inválido. Por favor, digite um número de 1 a 12.\n");
            continue; // Reinicia o loop
        }

        
        switch (mes) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                diasNoMes = 31;
                break;
            case 4: case 6: case 9: case 11:
                diasNoMes = 30;
                break;
            case 2:
              
                if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
                    diasNoMes = 29;
                } else {
                    diasNoMes = 28;
                }
                break;
        }

        
        printf("O mês %d/%d tem %d dias.\n", mes, ano, diasNoMes);

        
        printf("\nVOCÊ DESEJA OUTRAS ENTRADAS (S/?)? ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    printf("Programa encerrado.\n");

    return 0;
}

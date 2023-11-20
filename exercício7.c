#include <stdio.h>

int main() {
    char nome[50], sexo;
    float altura, peso;
    int numHomens = 0, numMulheres = 0;
    float somaAlturaHomens = 0, somaAlturaMulheres = 0, somaAlturaTotal = 0;
    float somaPesoHomens = 0, somaPesoMulheres = 0, somaPesoTotal = 0;

    for (int i = 0; i < 10; i++) {
        
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", nome);
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Digite a altura (em metros): ");
        scanf("%f", &altura);
        printf("Digite o peso (em kg): ");
        scanf("%f", &peso);

     
        if (sexo == 'M' || sexo == 'm') {
            numHomens++;
            somaAlturaHomens += altura;
            somaPesoHomens += peso;
        } else if (sexo == 'F' || sexo == 'f') {
            numMulheres++;
            somaAlturaMulheres += altura;
            somaPesoMulheres += peso;
        } else {
            printf("Sexo inválido. Use M ou F.\n");
            i--; // Desconsidera a entrada inválida e repete a iteração
            continue;
        }

      
        somaAlturaTotal += altura;
        somaPesoTotal += peso;
    }


    float mediaAlturaHomens = numHomens > 0 ? somaAlturaHomens / numHomens : 0;
    float mediaAlturaMulheres = numMulheres > 0 ? somaAlturaMulheres / numMulheres : 0;
    float mediaAlturaTotal = somaAlturaTotal / 10;
    float mediaPesoHomens = numHomens > 0 ? somaPesoHomens / numHomens : 0;
    float mediaPesoMulheres = numMulheres > 0 ? somaPesoMulheres / numMulheres : 0;
    float mediaPesoTotal = somaPesoTotal / 10;

   
    printf("\nResultados:\n");
    printf("Número de homens: %d\n", numHomens);
    printf("Número de mulheres: %d\n", numMulheres);
    printf("Altura média dos homens: %.2f metros\n", mediaAlturaHomens);
    printf("Altura média das mulheres: %.2f metros\n", mediaAlturaMulheres);
    printf("Altura média do grupo: %.2f metros\n", mediaAlturaTotal);
    printf("Peso médio dos homens: %.2f kg\n", mediaPesoHomens);
    printf("Peso médio das mulheres: %.2f kg\n", mediaPesoMulheres);
    printf("Peso médio do grupo: %.2f kg\n", mediaPesoTotal);

    return 0;
}

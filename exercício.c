#include<stdio.h>
#include<math.h>
#include<string.h>

main(){
   //Faça um algoritmo em para ler o nome, o sexo ( M ou m para masculino e F ou f para feminino), a altura e o peso de um grupo de 10 pessoas. O programa de deve calcular e exibir:   
  int idade,contador=0, homens=0, mulheres=0;
  char nome[20], sexo[3], sexom[]="m", sexof[]="f";
  float altura, peso, alturaMulher=0, alturaHomem=0, alturaMediahm, pesoHomem=0, pesoMulher=0, pesoMediohm,mediaPesoH, mediaPesoM,mediaAlturaH, mediaAlturaM;

  do{
    printf("\nDigite o nome do participante:\n");
    fgets(nome,20, stdin);

    printf("\nDigite a idade:\n");
    scanf("%d",&idade);

    printf("Digite:\nm-para masculino\nf-para feminino\n");
    fgets(sexo, 3, stdin);
    fflush(stdin);

    printf("\nDigite a altura:\n");
    scanf("%f",&altura);

    printf("\nDigite o peso:\n");
    scanf("%f",&peso);
    
    contador++;

    if(strcmp(sexo, sexof)==0){
      mulheres++;
      pesoMulher+=peso;
      alturaMulher+=altura;
      
    }else{
      homens++;
      pesoHomem+=peso;
      alturaHomem+=altura;
    }

  }while(contador<=10);

  mediaPesoH = pesoHomem/homens;
  mediaPesoM = pesoMulher/mulheres;
  mediaAlturaH = alturaHomem/homens;
  mediaAlturaM = alturaMulher/mulheres;
  alturaMediahm = alturaMulher + alturaHomem /contador;
  pesoMediohm= pesoMulher + pesoHomem /contador;

  printf("\nNumero de homens:%d",homens);
  printf("\nNumero de mulheres:%d",mulheres);
  printf("\nAltura média de homens:%.2f",mediaAlturaH);
  printf("\nAltura média de mulheres:%.2f",mediaAlturaM);
  printf("\nAltura média do grupo:%.2f",alturaMediahm);
  printf("\nPeso médio de homens:%.2f",mediaPesoH);
  printf("\nPeso médio de mulheres:%.2f",mediaPesoM);
  printf("\nPeso médio do grupo:%.2f",pesoMediohm);
}

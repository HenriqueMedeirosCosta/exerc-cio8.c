#include <stdio.h>
#include<math.h>
#include<string.h>

main() {

int idade, voto=0, opcao, contadorvoto=0, mv=0,sk=0,am=0,dm=0,ah=0,sf=0,votomaioridade=0;
  char nome[20], sexo[3],sexof[]="f";

  do{
    printf("\nDigite o nome do participante:\n");
    fgets(nome,20, stdin);

    printf("\nDigite a idade:\n");
    scanf("%d",&idade);
    fflush(stdin);

    printf("Digite:\nm-para masculino\nf-para feminino\n");
    fgets(sexo, 3, stdin);
    fflush(stdin);

    printf("Vote no candidato digitando o codigo de cada um:\n 1-Sam kerr- Australia\n 2-Alex morgan-EUA\n 3-Dzsenifer marozsan-Alemanha\n 4-Amandine henry-França\n 5- Marta vieira-Brasil\n");
    scanf("%d",&voto);

    switch(voto){
      case 1:
        contadorvoto++;
        sk++;
        if(strcmp(sexo, sexof)==0){
          sf++;
        }
        
        break;
      case 2: 
        contadorvoto++;
        am++;
        if(strcmp(sexo, sexof)==0){
          sf++;
        }
        break;
      case 3:
        contadorvoto++;
        dm++;
        if(strcmp(sexo, sexof)==0){
          sf++;
        }
        break;
      case 4:
        contadorvoto++;
        ah++;
        if(strcmp(sexo, sexof)==0){
          sf++;
        }
        break;
      case 5:
        contadorvoto++;
        mv++;
        if(strcmp(sexo, sexof)==0){
          sf++;
        }

        if(idade>=18){
          votomaioridade++;
            
        }
        break;
    }

    if(contadorvoto>50 && contadorvoto<300){
      printf("caso deseje finalizar a votação digite 0:\n ");
      scanf("%d",&opcao);
    }else{
      
      opcao=1;
    }
      
  }while(opcao==1);

  printf("\nNumero de votos da Sam kerr:%d\n",sk);
  printf("\nNumero de votos da Alex morgan:%d\n",am);
  printf("\nNumero de votos da Dzsenifer marozsan:%d\n",dm);
  printf("\nNumero de votos da Amandine henry:%d\n",ah);
  printf("\nNumero de votos da Marta vieira:%d\n",mv);

  if(sk>am && sk>dm && sk>ah && sk>mv){
    printf("\nSam kerr é a jgadora mais votada");
  }else if(am>sk && am>dm && am>ah && am>mv){
    printf("\nAlex morgan é a jgadora mais votada");
  }else if (dm>sk && dm>am && dm>ah && dm>mv){
    printf("\nDzsenifer marozsan é a jgadora mais votada");
  }else if (ah>sk && ah>am && ah>dm && ah>mv){
    printf("\nAmandine henry é a jgadora mais votada");
  }else if(mv>sk && mv>am && mv>dm && mv>ah){
    printf("\nMarta vieira é a jgadora mais votada");
  }


  printf("\nNumero de mulheres que votaram:%d",sf);
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
    setlocale(LC_ALL,"");
float valor1 , valor2 ;
int opcao;

printf("\n informe o prineiro valor:");
 scanf("%f", &valor1);
printf("\n informe o segundo valor:");
 scanf("%f",&valor2);

printf("\n escolha uma op��o:");
printf("\n 1 - soma");
printf("\n 2 - subtra��o");
printf("\n 3 - multiplica��o");
printf("\n 4 - divis�o");
 scanf("%d", &opcao);

 switch (opcao){
 case 1:
    pribtf("\n o resultado da soma � %f", valor1+valor2);
    break;
 case 2:
    printf("\n o resultado da subtra��o � %f", valor1-valor2);
    break;
 case 3:
    printf("\n o resultado da multiplica��o � %f", valor1*valor2);
    break;
 case 4:
  if( valor2==0 ){
printf("\n nao pode ser executado");
  }
  else{
printf("\n o resultado da divis�o � %f", valor1/valor2);
  }
  break;
 default:
    pribtf("\n nenhuma das opera��es");
}

}

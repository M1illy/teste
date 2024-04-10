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

printf("\n escolha uma opção:");
printf("\n 1 - soma");
printf("\n 2 - subtração");
printf("\n 3 - multiplicação");
printf("\n 4 - divisão");
 scanf("%d", &opcao);

 switch (opcao){
 case 1:
    pribtf("\n o resultado da soma é %f", valor1+valor2);
    break;
 case 2:
    printf("\n o resultado da subtração é %f", valor1-valor2);
    break;
 case 3:
    printf("\n o resultado da multiplicação é %f", valor1*valor2);
    break;
 case 4:
  if( valor2==0 ){
printf("\n nao pode ser executado");
  }
  else{
printf("\n o resultado da divisão é %f", valor1/valor2);
  }
  break;
 default:
    pribtf("\n nenhuma das operações");
}

}

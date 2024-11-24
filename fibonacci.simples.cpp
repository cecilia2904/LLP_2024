
#include <stdio.h>

main()
{
  float atual, anterior=1, final;
  int qntMeses, cont=0;
       
  printf("Digite quantos meses: \n");
  scanf("%d", &qntMeses);
  
  while(cont<qntMeses){
  	final=atual+anterior;
  	anterior=atual;
  	atual=final;
  	cont=cont+1; 
  }
  printf("o valor final e %.2f", final); // %.2f é para ter 2 casas decimais após o ponto
    
}
  





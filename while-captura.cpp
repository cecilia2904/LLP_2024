
#include <stdio.h>

main()
{
  int n,cont=0, soma=0,menor=0, maior=0 ,x, y, z, ma, me;
  float media=0,porcentagem;
       
  ma=me=x;
  
  printf("Digite quantos numeros quer: \n");
  scanf("%d", &n);
  printf("Digite um valor para y: \n");
  scanf("%d", &y);
  printf("Digiteum valor para z: \n");
  scanf("%d", &z);
  
  while(cont<n){
  	printf("informe um numero: \n");
  	scanf("%d", &x);
  	soma=soma+x;
  	cont=cont+1;
  	if(x<y){
  		menor=menor+1;	
	  }
	if(x>z)
	  {
  		maior=maior+1;	
	  }
    if (x > ma)
           ma = x;
       if (x < me && x != 0)
           me = x;
  }
  
  porcentagem= ((maior*1.0)/n)*100;
  media= (soma*1.0)/n;
  
  printf("Soma = %d \n", soma);
  printf("media= %f \n",media );
  printf("%d sao menores que y \n", menor,y);
  //printf(" %d sao maiores que %d", maior, z);
  printf("%f %% dos numeros sao maiores que z \n", porcentagem);
  printf("maior = %d \n", ma);
  printf("menor = %d ", me);
    
}
  





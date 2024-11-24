
#include <stdio.h>

main()
{
  int n,cont=0, soma=0,x;
       
  printf("Digite quantos numeros quer: \n");
  scanf("%d", &n);
  
  while(cont<n){
  	printf("informe um numero: \n");
  	scanf("%d", &x);
  	soma=soma+x;
  	cont=cont+1; 
  }
  printf("Soma = %d", soma);
    
}
  





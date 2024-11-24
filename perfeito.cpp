#include <stdio.h>

main()
{
  int n,i=1, d=0, soma=0;
       
  printf("Digite um numero: \n");
  scanf("%d", &n);
  
  do
  { 
  	if(n%i==0)
	  {
	  	d++;
	  	if(d!=n)
	  	soma=+d;
	  }
	  i++;
  }while(i<n);
  
  printf("O numero %d tem %d divisores: \n ", n, d);
  
   if(d==2)
  	printf("o numero e primo");
  	
   if(soma==n){
   	printf("%d e perfeito", n);
   }else{
   	printf("%d nao e perfeito", n);
   }
  	
}
  





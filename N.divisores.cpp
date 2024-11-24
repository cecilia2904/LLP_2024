#include <stdio.h>

main()
{
  int n,i=1, d=0;
       
  printf("Digite um numero: \n");
  scanf("%d", &n);
  
  do
  { 
  	if(n%i==0)
	  {
	  	d=d+1;
	  }
	  i=i+1;
  }while(i<=n);
  
  printf("O numero %d tem %d divisores: ", n, d);
    
}
  





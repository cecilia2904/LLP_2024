
#include <stdio.h>

main()
{
  float menor, maior, x;
  int n, cont=0;
       
  
  printf("Digite quantos numeros quer: \n");
  scanf("%d", &n);
  
  while(cont!=n)
  { printf("informe um numero: \n");
  	scanf("%f", &x);
  	if(cont==0)
	  {menor=maior=x;	
	  }
	cont=cont+1;
    if (x > maior)
        maior = x;
    if (x < menor)
        menor = x;
  }
  printf("maior = %.2f \n", maior);
  printf("menor = %.2f ", menor);
    
}
  





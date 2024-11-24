
#include <stdio.h>

main()
{
  int n, d=0;
       
  printf("Digite um numero: \n");
  scanf("%d", &n);
  
  do
  { d=d+1;
  	if(n%d==0)
	  {
	  	 printf("%d ,",d);	
	  }
  }while(d<n);
    
}
  





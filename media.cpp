#include<stdio.h>
#include<math.h>
#include<locale.h>
main()

{
	float p1, p2, p3, p4, media, af, m1, m2;
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite sua primeira nota: \n");
	scanf("%f" ,&p1);
	printf("Digite sua segunda nota: \n");
	scanf("%f" ,&p2);
	printf("Digite sua terceira nota: \n");
	scanf("%f", &p3);
	printf("Digite sua quarta nota: \n");
	scanf("%f" ,&p4);
	
	m1=(p1+p2)/2;
	m2=(p3+p4)/2;
	media=((2*m1)+(3*m2))/5;
			
	if(media>=7)
		printf("Aprovado! %f", media);	
		else if(media<3)
			printf("Reprovado! %f", media);	
			else
			{	printf("Voce precisa de %f para passar :\n", af=10-media);
				printf("Digite sua nota da AF: \n");
				scanf("%f" ,&af);	
				if(af>=10-media)
				 	printf("Aprovado! %f", media);	
				 	else
					  printf("Reprovado! %f", media);	
			}
	
}


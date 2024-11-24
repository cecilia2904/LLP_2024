#include<stdio.h>
#include<math.h>
#include<locale.h>
main()

{
	float m, h, IMC , PI, ganhar, perder, tempo;
	setlocale(LC_ALL, "portuguese");

	printf("Digite seu peso em kg: \n");
	scanf("%f" ,&m);
	printf("Digite sua altura em metros: \n");
	scanf("%f" ,&h);

	IMC=m/(h*h);
	//MaiorPI=24.9*(h*h);
	PI=18.5*(h*h);
	if(PI>=m){
		ganhar=PI-m;
		tempo=ganhar/1.1;	
	} else{
		perder=m-PI;
		tempo=perder/1.1;
	}

	



	if(IMC<18.5)
	{
		printf("Abaixo do peso.\n");
		printf("Seu peso ideal é :%f kg\n",PI);
		printf("Voce precisa ganhar: %f kg em %f meses\n",ganhar, tempo);
		
	}
	else
	{
		if((IMC>=18.5 )&& (IMC<24.9))
		{
			printf("Peso normal.\n" );
			printf("Seu peso ideal é :%f kg\n",PI);
			printf("Voce precisa perder: %f kg em %f meses\n",perder, tempo);
		}
		else
		{
			if((IMC>=24.9 )&& (IMC<29.9))
			{
				printf("Pré-obeso.\n");
				printf("Seu peso ideal é :%f kg\n",PI);
				printf("Voce precisa perder: %f kg em %f meses\n",perder, tempo);
			}
			else
			{
				if((IMC>=29.9 )&& (IMC<40))
				{
					printf("Obesidade grau 1.\n");
					printf("Seu peso ideal é :%f kg\n",PI);
					printf("Voce precisa perder: %f kg em %f meses\n",perder, tempo);
				}
				else
				{
					if((IMC>=40 )&& (IMC<50))
					{
						printf("Obesidade grau 2.\n");
						printf("Seu peso ideal é :%f kg\n",PI);
						printf("Voce precisa perder: %f kg em %f meses\n",perder, tempo);
					}
					else
					{
						if(IMC>50)
						{
							printf("voce esta em Obesidade MORBIDA.\n");
							printf("Seu peso ideal é :%f kg\n",PI);
							printf("Voce precisa perder: %f kg em %f meses\n",perder, tempo);
						}
					}
				}
			}
		}
		
	}

}



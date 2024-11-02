#include<stdio.h>
#include<math.h>
#include<locale.h>
main()

{
	float m, h, IMC , MaiorPI, MenorPI, ganhar, perder, tempo;
	setlocale(LC_ALL, "portuguese");

	printf("Digite seu peso em kg: \n");
	scanf("%f" ,&m);
	printf("Digite sua altura em metros: \n");
	scanf("%f" ,&h);

	IMC=m/(h*h);
	MaiorPI=24.9*(h*h);
	MenorPI=18.5*(h*h);
	ganhar=MenorPI-m;
	perder=m-MaiorPI;
	tempo=perder/1.1;



	if(IMC<18.5)
	{
		printf("Abaixo do peso.\n");
		printf("Seu peso ideal está entre:%f kg e %f kg\n",MenorPI, MaiorPI);
		printf("Voce precisa ganhar: %f kg\n",ganhar);
	}
	else
	{
		if(IMC>18.5 && IMC<24.99)
		{
			printf("Peso normal.\n" );
			printf("Seu peso ideal está entre:%f kg e %f kg\n",MenorPI, MaiorPI);
		}
		else
		{
			if(IMC>24.9 && IMC<29.99)
			{
				printf("Pré-obeso.\n");
				printf("Seu peso ideal está entre:%f kg e %f kg\n",MenorPI, MaiorPI);
				printf("Voce precisa perder: %f kg\n",perder);
				printf("Em %f  meses\n",tempo);
			}
			else
			{
				if(IMC>29.9 && IMC<40)
				{
					printf("Obesidade grau 1.\n");
					printf("Seu peso ideal está entre:%f kg e %f kg \n",MenorPI, MaiorPI);
					printf("Voce precisa perder: %f kg\n",perder);
					printf("Em %f  meses\n",tempo);
				}
				else
				{
					if(IMC>40 && IMC<50)
					{
						printf("Obesidade grau 2.\n");
						printf("Seu peso ideal está entre:%f kg e %f kg \n",MenorPI, MaiorPI);
						printf("Voce precisa perder: %f kg\n",perder);
						printf("Em %f  meses\n",tempo);
					}
					else
					{
						if(IMC>50)
						{
							printf("voce esta em Obesidade MORBIDA.\n");
							printf("Seu peso ideal está entre:%f kg e %f kg\n",MenorPI, MaiorPI);
							printf("Voce precisa perder: %f kg \n",perder);
							printf("Em %f  meses\n",tempo);
						}
					}
				}
			}
		}
		
	}

}



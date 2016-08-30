//ao   executar no terminal usar comando gcc -std=c11 labfisica.c -o labfisica -lm
// não esquecer de colocar -lm no final

#include <stdio.h>
#include <math.h>

int main(void)
{
	int N,i;
	float fundoescala, valor[50], media=0, desviom[50],desvioqua[50], desvioquam=0, desviop=0, errosist=0,errototal=0;


	printf("Digite o número de experiências feitas:\n");//valor de experiencias
		scanf("%d",&N);


	for (i = 0; i < N; i++)// leitura e armazenamento dos valores experimentais
	{
		printf("Digite o valor %d: \n",i+1);
			scanf("%f",&valor[i]);
	}

	printf("Digite o  fundo de escala do aparelho usado para medir:\n");// valor fundo de escala que será usado depois
		scanf("%f",&fundoescala);




	for (int j = 0; j < N; j++)//primeira média, a dos valores descobertos
	{
		media = media + valor[j];
	}

	media = media/N;

		printf("media dos valores: %f\n",media);


	for (int a = 0; a < N; a++)// valor desvio médio
	{
		desviom[a] = valor[a] - media;
			printf("Valor do desvio da medida %d: %f\n",a, desviom[a]);
	}


		for (int b = 0; b < N; b++)// desvio quadrático comum 
		{
			desvioqua[b] = desviom[b] * desviom[b];
				printf("valor do desvio quadrático %d: %f\n",b+1,desvioqua[b]); 
		}

			for (int c = 0; c < N; c++)// desvio quadrático médio
			{
				desvioquam = desvioquam + desvioqua[c];
			}
			desvioquam = desvioquam/N;

			printf("Desvio quadrático médio: %f\n",desvioquam);


				desviop = sqrt(desvioquam);// desvio padrão
				printf("desvio padrão: %f\n",desviop);


		errosist = fundoescala/2;
			printf("erro estatístico = %f\n",errosist);


		errototal = sqrt(pow(desviop,2)+pow(errosist,2));
		printf("Erro total: %f\n",errototal);

		printf("\n");
		printf("\n");
			printf("Resultado final = (%f +- %f\n",media,errototal);






	return 0;
}
#include <stdio.h>
# include <stdlib.h>
#include <time.h>

int main ()
{
int i,N,anterior=0, actual=0, media;
srand(time (NULL));
printf("Numero de elementos a ordenar:\n");
scanf("%d",&N);
int lista [N];
int maspeque = lista[0], masgrande = lista [0];
printf("Lista sin ordenar:\n");
for (i=0; i<N; i++) // rango del 1 al 30
	{
		lista [i]=rand()%(30+1-1)+1;
		printf("%d\t", lista[i]);
	}
printf ("\n");
	
for (i=0;i<N; i++) //ordenar lista
	{
		actual=lista[i];
		anterior=i-1;
		while (anterior>=0&&lista[anterior]>actual)
		{		
			lista[anterior+1]=lista[anterior];
			anterior--;
		}
		lista[anterior+1]=actual;
	}
printf("lista ordenada\n");
for (i=0;i<N;i++)
printf("%d\t", lista [i]);
printf("\n");


for (i=1;i<N;i++) //valor más grande y más pequeño
	{
		if (lista[i]<maspeque)
			{
				maspeque = lista[0];
			}	

		if (lista[i]>masgrande)
			{
				masgrande=lista[i-1];
			}
	}
printf ("El elemento mas peque de mi lista es:%d\n", maspeque);
printf ("El elemento mas grande de mi lista es:%d\n", masgrande);

for (i=0;i<N;i++)
	{
		media= lista[i]/N;
	}
printf ("La media es igual a:%d\n", media);

return 0;
}


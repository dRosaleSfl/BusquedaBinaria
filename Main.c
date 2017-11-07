/*
	la busqueda binarea significa que se va a buscar un numero especifico en un vector que ya esta arreglado del menor al mayor
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
	{
		srand(time(NULL));
		int n = 0;
		int in = 0;
		printf ("De que cantidad de numeros aleatorios quieres que sea la el vector?\n");
		scanf ("%d", &n);
		int mat [n];
		int valor = 0;
		int min = 1;
		int max = 50;
		int men = 0;
		int med = (in + n)/2;
		int busqueda = 0;
		for (int cont = 0; cont < n; cont ++)
			{
				valor = min + rand() / (RAND_MAX / (max-min+1)+1);
				mat [cont] = valor;
				printf ("\%d ", mat [cont]);
			}
		
		for (int cont = 0; cont < n; cont ++)
			{
				for (int cont0 = 0; cont0 < n; cont0 ++)
					{
						switch (cont)
							{
								case 0:
									men = mat [cont];
								break;
								
								default:
									if (mat [cont] < mat [cont0])
										{
											men = mat [cont];
											mat [cont] = mat [cont0];
											mat [cont0] = men;
										}
								break;
							}
					}
			}
		
		printf ("\n");
		
		for (int cont3 = 0; cont3 < n; cont3 ++)
			{
				printf ("%d ", mat [cont3]);
			}
		printf ("\nQue numeros del vector quieres buscar?\n");
		scanf ("%d", &busqueda);
		
		while (in <= n) 
			{
				med = (in + n) / 2;
				if (busqueda == mat[med]) 
					{
						printf("El elemento esta en la posicion: %d \n", med + 1);
						break;
					} 
				else if (mat[med] > busqueda)
					{
						n = med - 1;
					} 
				else 
					{
						in = med + 1;
					}
			}
	}

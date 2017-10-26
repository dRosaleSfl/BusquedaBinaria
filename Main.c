/*
	la busqueda binarea significa que se va a buscar un numero especifico en un vector que ya esta arreglado del menor al mayor
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
	{
		srand(time(NULL));
		int mat [6];
		int ordenad;
		int valor = 0;
		int min = 1;
		int max = 50;
		int busqueda = 0;
		int busqN = 0;
		int band = 0;
		for (int cunt = 0; cunt < 6; cunt ++)
			{
				for (int cont = 0; cont < 6; cont ++)
					{
						valor = min + rand() / (RAND_MAX / (max-min+1)+1);
						mat [cont] = valor;
					}
			}
		
		for (int cont = 0; cont < 6; cont ++)
			{
				for (int cont2 = 0; cont2 < 6; cont2 ++)
					{
						if (mat [cont] < mat [cont2])
							{
								ordenad = mat [cont];
								mat [cont] = mat [cont2];
								mat [cont2] = ordenad;
								
							}
					}
			}
		
		for (int cont3 = 0; cont3 < 6; cont3 ++)
			{
				printf ("%d ", mat [cont3]);
			}
		printf ("\nQue numeros del vector quieres buscar?\n");
		scanf ("%d", &busqueda);
		do
			{
				switch (busqN)
					{
						case 0:
							if (mat [2] < busqueda)
								{
									busqN ++ ;
								}
							if (mat [2] > busqueda)
								{
									if (mat [1] == busqueda)
										{
											printf ("El numero que buscas esta en la seguda posicion\n");
											band = 1;
										}
									if (mat [0] == busqueda)
										{
											printf ("El numero que buscas esta en la primera posicion\n");
											band = 1;
										}
								}
							if (mat [2] == busqueda)
								{
									printf ("El numero que buscas esta en la tercera posicion\n");
									band = 1;
								}
						break;
						
						case 1:
							if (mat [3] < busqueda)
								{
									busqN ++ ;
								}
							if (mat [3] == busqueda)
								{
									printf ("El numero que buscas esta en la Quarta posicion\n");
									band = 1;
								}
						break;
						
						case 2:
							if (mat [4] == busqueda)
								{
									printf ("El numero que buscas esta en la Quinta posicion\n");
									band = 1;
								}
							if (mat [5] == busqueda)
								{
									printf ("El numero que buscas esta en la Sexta posicion\n");
									band = 1;
								}
						break;
					}
			} while (band == 0);
	}

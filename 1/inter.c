/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:19:18 by sajimene          #+#    #+#             */
/*   Updated: 2023/08/11 09:31:21 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void inter(char *s1, char *s2)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		j = 0; //j es el contador para recorrer s2, lo inicializamos a 0 antes de recorrer s2 en busca de una coincidencia con el caracter a comparar de s1.
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j]) //si son iguales los caracteres entramos en este bloque.
			{
				k = 0; //usamos k para verificar si el caracter de s1 a aparecido antes o no.
				while (s1[k] != s1[i])
					k++;
				if (k == i) //significa que el carácter s1[i] no ha aparecido antes en la cadena s1 hasta el índice i.
				{
					k = 0; //reiniciamos nuevamente k a 0;
					while (s2[k] != s2[j]) //verificamos si el caracter s2[j] jha aparecido antes en la cadena s2.
							k++;
					if (k == j) //significa que el carácter s2[j] no ha aparecido antes en s2.
						write(1, &s1[i], 1); //en este caso escribimos el carater s1[i] en la salida estándar.
				}
			}
			j++; //incrementamos j para pasar al siguiente carácter en s2.
		}
		i++; //incrementamos i para avanzar al siguiente carácter en s1.
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
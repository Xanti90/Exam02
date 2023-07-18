/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:28:54 by sajimene          #+#    #+#             */
/*   Updated: 2023/07/18 12:36:39 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	int aux;

	i = 0;
	while (i < (size - 1)) //para que e indice i no apunte fuera del array.
	{
		if (tab[i] > tab[i + 1]) //si las posiciones 1 y 2 del array...
		{
			aux = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = aux;
			i = -1; //garantizar que se cmpuebe nuevamente pimer elemento despues de un cambio (swap)
		}
		i++; //tenemos un while, iteramos el array cuando ya se han ordenado dos numeros del mismo.
	}
}
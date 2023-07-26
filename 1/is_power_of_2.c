/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:14:55 by sajimene          #+#    #+#             */
/*   Updated: 2023/07/26 15:24:46 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	unsigned int aux;

	aux = 1;
	while (aux <= n)
	{
		if (aux == n)
			return (1);
		aux = aux * 2;
	}
	return (0);
}
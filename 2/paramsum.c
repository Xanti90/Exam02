/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:48:07 by sajimene          #+#    #+#             */
/*   Updated: 2023/08/03 13:58:28 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_small_putnbr(int nbr)
{
	if (nbr >= 10)
	{
		ft_small_putnbr(nbr / 10);
		ft_small_putnbr(nbr % 10);
	}
	if (nbr <= 9)
	{
		nbr = nbr + '0';
		write(1, &nbr, 1);
	}
}

int main(int argc, char **argv)
{
	(void) argv;
	ft_small_putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}
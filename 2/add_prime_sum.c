/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:36:26 by sajimene          #+#    #+#             */
/*   Updated: 2023/07/31 11:55:58 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_small_putnbr(int nbr)
{
	int change;

	if (nbr >= 10)
	{
		ft_small_putnbr(nbr / 10);
		ft_small_putnbr(nbr % 10);
	}
	if (nbr < 10)
	{
		change = nbr + '0';
		write(1, &change, 1);
	}
}

int ft_is_prime(int nbr)
{
	int check;

	check = 2;
	while (check < nbr)
	{
		if (nbr % check == 0)
				return (0);
		check++;
	}
	return (1);
}

int add_prime(int nbr)
{
	int aux;
	int sum;

	aux = 2;
	sum = 0;
	while (aux <= nbr)
	{
		if (ft_is_prime(aux) == 1)
			sum = sum + aux;
		aux++;
	}
	return (sum);
}

int ft_small_atoi(char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}

int main(argc, char **argv)
{
	if (argc == 2)
		ft_small_atoi(add_prime(ft_small_atoi(argv[1])));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 09:36:16 by sajimene          #+#    #+#             */
/*   Updated: 2023/03/23 10:43:34 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	int i;
	int k;
	int l;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			write(1, "fizzbuzz", 8);
		}
		else if (i % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if (i % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else if (i > 10)
		{
			k = i / 10 + '0';
			l = i % 10 + '0';
			write(1, &k, 1);
			write(1, &l, 1);
		}
		else
		{
			k = i + '0';
			write(1, &k, 1);
		}
		write(1, "\n", 1);
		i++;
	}
}
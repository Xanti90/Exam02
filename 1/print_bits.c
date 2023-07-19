/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:09:47 by sajimene          #+#    #+#             */
/*   Updated: 2023/07/19 15:11:17 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octec)
{
	int i;
	unsigned char bit;

	i = 8;
	while (i--)
	{
		bit = ((octec >> i) & 1) + '0';
		write(1, &bit, 1);
	}
}
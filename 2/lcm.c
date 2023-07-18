/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:01:34 by sajimene          #+#    #+#             */
/*   Updated: 2023/07/17 15:07:13 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int  lcm(unsigned int a, unsigned int b)
{
	unsigned int lcm;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		lcm = a;
	if (b > a)
		lcm = b;
	while (1)
	{
		if (lcm % a == 0 && lcm % b == 0)
				return (lcm);
		lcm++;
	}
}

int main(void)
{
	printf("%u\n", lcm(5, 10));
	return (0);
}
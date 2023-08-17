/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 09:36:16 by sajimene          #+#    #+#             */
/*   Updated: 2023/08/11 10:07:38 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void small_putnbr(int n)
{
	if (n >= 10)
	{
		small_putnbr(n / 10);
		small_putnbr(n % 10);
	}
	else 
	{
		n = n + '0';
		write(1, &n, 1);
	}
}

void fizzbuzz(int n)
{
	if (n % 15 == 0)
		write(1, "fizzbuzz", 8);
	else if (n % 3 == 0)
		write(1, "fizz", 4);
	else if (n % 5 == 0)
		write(1, "buzz", 4);
	else
		small_putnbr(n);
}

int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		fizzbuzz(n);
		write(1, "\n", 1);
		n++;
	}
	return (0);
}
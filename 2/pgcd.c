/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:46:01 by sajimene          #+#    #+#             */
/*   Updated: 2023/07/17 15:54:02 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void pgcd(int a, int b)
{
	int n;
	int result;

	n = 1;
	result = 0;
	while (n <= a && n <= b)
	{
		if (a % n == 0 && b % n == 0)
			result = n;
		n++;
	}
	printf("%d", result);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return (0);
}
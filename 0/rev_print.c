/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:38:01 by sajimene          #+#    #+#             */
/*   Updated: 2023/08/13 20:57:14 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rev_print(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);

		i--;
	}
}

int main(int argc, char **argv)
{
	if (argc == 0)
		rev_print(argv[1]);
	write(1, "\n", 1);
	return (0);
}
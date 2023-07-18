/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:07:46 by sajimene          #+#    #+#             */
/*   Updated: 2023/07/17 15:43:11 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void hidenp(char *s1, char *s2)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[k] != '\0')
		k++;
	while (s2[j] != '\0')
	{
		if (s1[i] == s2[j])
				i++;
		j++;
	}
	if (i == k)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
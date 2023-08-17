/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:31:22 by sajimene          #+#    #+#             */
/*   Updated: 2023/08/14 12:14:58 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check(char c, char *str, int k)
{
	int i;

	i = 0;
	while (i < k)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void ft_union(char *s1, char *s2)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;;
		j++;
	}
	while (k <= i)
	{
		if (check(si[k], s1, k) == 1)
			write(1, &s1[k], 1);
		k++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
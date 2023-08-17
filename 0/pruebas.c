/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:26:56 by sajimene          #+#    #+#             */
/*   Updated: 2023/08/10 13:00:17 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void inter(char *s1, char *s2)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				k = 0;
				while (s1[k] != s1[i])
					k++;
					if (k == i)
					{
						k = 0;
						while (s2[k] != s2[j])
							k++;
							if (k == j)
								write(1, &s1[i], 1);
					}
			}
			j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

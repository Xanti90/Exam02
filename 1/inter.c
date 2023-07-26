/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:19:18 by sajimene          #+#    #+#             */
/*   Updated: 2023/07/24 12:50:42 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	inter(char *s1, char *s2)
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
			while (s1[i] == s2[i])
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
	}
	i++;
}
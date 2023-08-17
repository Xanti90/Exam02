/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:13:53 by sajimene          #+#    #+#             */
/*   Updated: 2023/08/15 11:41:46 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strrev(char *str)
{
	int i;
	int j;
	int aux;

	i = 0;
	j = 0;
	aux = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (i > j)
	{
		aux = str[i];
		str[i] = str[j];
		str[j] = aux;
		i--;
		j++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_strrev(argv[1]);
	write(1, "\n", 1);
	return (0);
}
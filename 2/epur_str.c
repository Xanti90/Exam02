/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:02:01 by sajimene          #+#    #+#             */
/*   Updated: 2023/07/17 14:58:45 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void epur_str(char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (str[k] != '\0')
		k++;
	k--;
	while (str[k] == ' ' || str[k] == '\t')
		k--;
	while (str[j] == ' ' || str[j] == '\t')
		j++;
	while (i <= k)
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i - 1] == ' ' && i > j)
			write(1, " ", 1);
			i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	write (1, "\n", 1);
	return (0);
}
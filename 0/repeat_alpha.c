/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:04:18 by sajimene          #+#    #+#             */
/*   Updated: 2023/08/11 10:50:16 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char c, int i)
{
	if (i >= 0)
	{
		write(1, &c, 1);
		i--;
	}
}

void repeat_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str [i] <= 'z')
			ft_putstr(str[i], str[i] - 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putstr(str[i], str[i] - 'A');
		else
			write(1, &str[i], 1);
			i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}
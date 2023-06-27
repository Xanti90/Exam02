/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 10:59:36 by sajimene          #+#    #+#             */
/*   Updated: 2023/06/27 11:46:09 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot_13(char *str)
{
	int i;

	i = 0;
	while ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		str[i] = str[i] + 13;
	while ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'z'))
		str[i] = str[i] - 13;
	write(1, &str[i], 1);
	i++;
}

int main(int argc, char **argv)
{
	if (argc == 2)
		rot_13(argv[1]);
	write(1, "\n", 1);
	return (0);
}
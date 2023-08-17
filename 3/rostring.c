/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:36:48 by sajimene          #+#    #+#             */
/*   Updated: 2023/08/16 14:05:42 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void rostring(char *str)
{
	int i;
	int start;
	int end;
	int flag;

	i = 0;
	start = 0;
	end = 0;
	flag = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	start = i;
	while (str[i] != '\0' && str [i] != ' ' && str[i] != '\t')
		i++;
	end = i - 1;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] != '\0')
	{
		while ((str[i] == ' ' && str[i + 1] == ' ') || (str[i] == '\t' && str[i] == '\t'))
			i++;
		if (str[i] == ' ' || str[i] == '\t')
		flag = 1;
		write(1, &str[i], 1);
		i++;
	}
	if (flag)
		write(1, " ", 1);
	while (start <= end)
	{
		write(1, &str[start], 1);
		start++;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:00:48 by sajimene          #+#    #+#             */
/*   Updated: 2023/08/16 12:02:55 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int *ptr;
	int size;
	int i;

	size = 0;
	i = 0;
	while (start > end)
		size = (start - end);
	while (end > start)
		size = (end - start);
	ptr = malloc(sizeof(int) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	if (start >= end)
	{
		while (start >= end)
		{
			ptr[i] = start;
			start--;
			i++;
		}
	}
	else if (start <= end)
	{
		while (start >= end)
		{
			ptr[i] = start;
			start++;
			i--;
		}
	}
	return (ptr);
}

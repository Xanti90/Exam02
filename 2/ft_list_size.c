/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:38:53 by sajimene          #+#    #+#             */
/*   Updated: 2023/07/17 11:43:36 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h" //crear la librería con la estructura que te dan en el subject.

int	ft_list_size(t_list *begin_list)
{
	int size;

	size = 0;
	while (begin_list != '\0')
	{
		begin_list = begin_list ->next;
		size++;
	}
	return (size);
}
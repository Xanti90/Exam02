/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:28:13 by sajimene          #+#    #+#             */
/*   Updated: 2023/08/17 10:50:49 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}
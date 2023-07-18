/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:38:57 by sajimene          #+#    #+#             */
/*   Updated: 2023/07/18 12:57:19 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	int aux;
	t_list *temp;

	temp = lst;
	while (lst->next != '\0')
	{
		if (((*cmp) (lst->data, lst->next->data )) == 0)
		{
			aux = lst->data;
			lst->data = lst->next->data;
			lst->next->data = aux;
			lst = temp;
		}
		else
			lst = lst->next;
	}
	lst = temp;
	return (lst);
} 
//Esta funcion hace lo mismo (un swap) que sort_int_tab pero con listas.
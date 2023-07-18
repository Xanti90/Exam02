/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:57:34 by sajimene          #+#    #+#             */
/*   Updated: 2023/07/18 12:56:07 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

#include <stddef.h>

typedef struct s_list
{
	struct s_list *next;
	void		*data;
}				t_list;

t_list *sort_list(t_list *lst, int (*cmp)(int, int));

#endif

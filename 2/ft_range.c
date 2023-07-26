/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:00:48 by sajimene          #+#    #+#             */
/*   Updated: 2023/07/19 18:13:50 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int *ptr;
	int size;
	int i;

	i = 0;
	size = 0;
	if (start > end)
		size = (start - end);
	if (end > start)
		size = (end - start);
	ptr =malloc(sizeof(int) * (size + 1));
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
		while (start <= end)
		{
			ptr[i] = start;
			start++;
			i++;
		}
	}
	return (ptr);
}

/*int main()
{
    int start = 5;
    int end = -6;
    int *ptr;
    int size, i;

    ptr = ft_range(start, end);
    if (ptr == NULL)
        return 1;

    if (start > end)
        size = start - end;
    else
        size = end - start;
	/*
    printf("The array contains %d elements:\n", size + 1);
	*/
    /*i = 0;
    while (i <= size)
    {
        printf("%d ", ptr[i]);
        i++;
    }
    printf("\n");
    free(ptr);
    return 0;
}*/
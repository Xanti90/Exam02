/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:07:05 by sajimene          #+#    #+#             */
/*   Updated: 2023/07/19 17:13:27 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
					return ((char *) &s1[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/*int main(void)
{
	char s1[] = "hola caracola";
	char s2[] = "r";

	printf("%s\n", strpbrk(s1, s2));
	printf("%s", ft_strpbrk(s1, s2));

	return (0);
}*/
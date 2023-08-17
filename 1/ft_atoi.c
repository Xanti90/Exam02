/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:49:39 by sajimene          #+#    #+#             */
/*   Updated: 2023/08/11 12:25:32 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	result;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] == '\t' && str[i] == '\r')) //Salta cualquier espacio en blanco o caracteres de control al principio de la cadena.
		i++;
	if (str[i] == '-') //Comprueba si el caracter en la posición actual es negativo.
	{
		neg = neg * -1; //Si es negativo, cambia e valor de neg a -1 para indicar que el número final debe ser negativo.
		i++; //Aumenta i para asar al siguiente caracter.
	}
	else if (str[i] == '+') //si el caracter es un signo +, simplemente aumenta i para pasar al siguiente caracter.
		i++;
		while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9') //Este bucle se ejecuta siempre que el caracter actual sea un digito entre 0 y 9.
		{
			result = result * 10 + (str[i] - '0');
			i++;
		}
		return (result * neg); //Devuelve el resultado * por neg, garantiza que el número sea negativo si se encontro un '-'.
}

/*int main(void)
{
	char str[] = "  -+40";

	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));

	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 08:39:30 by sajimene          #+#    #+#             */
/*   Updated: 2023/08/17 17:17:56 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void do_op(int n1, char ope, int n2)
{
	int result;

	result = 0;
	if (ope == '+')
		result = n1 + n2;
	else if (ope == '-')
		result = n1 - n2;
	else if (ope == '*')
		result = n1 * n2;
	else if (ope == '/')
		result = n1 / n2;
	else if (ope == '%')
		result = n1 % n2;
	printf("%d", result);
}

int main(int argc, char **argv)
{
	if (argc == 4)
		do_po(atoi(argv)[1], *argv[2], atoi(argv[3]));
	printf("\n");
	return (0);
}
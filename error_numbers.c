/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:16:40 by irivero-          #+#    #+#             */
/*   Updated: 2023/02/25 18:28:37 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ourlib.h"
#include <unistd.h>

int	ft_error_nbr(char *nbr)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(nbr);
	if (size > 39)
	{
		write(1, "Error\n", 7);
		return (0);
	}
	while (nbr[i])
	{
		if (nbr[i] < '0' || nbr[i] > '9')
		{
			write(1, "Error\n", 7);
			return (0);
		}
		i++;
	}
	return (1);
}

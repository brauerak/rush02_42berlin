/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_nb_in_2digits.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:52:42 by irivero-          #+#    #+#             */
/*   Updated: 2023/02/26 14:04:11 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ourlib.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_write_nb_in_2digits(char *nb, char *buffer)
{
	int		dg1;
	char	*dg1_char;
	int		dg2;
	char	*dg2_char;
	int		size;

	size = ft_strlen(nb);
	if ((size == 2 && nb[0] != '1' && nb[1] != '0'))
	{
		dg1 = (nb[0] - 48) * 10;
		dg1_char = itoa(dg1);
		ft_write_nb_into_ltrs(ft_strstr(buffer, dg1_char), buffer);
		write(1, "-", 1);
		dg2 = (nb[1] - 48);
		dg2_char = itoa(dg2);
		ft_write_nb_into_ltrs(ft_strstr(buffer, dg2_char), buffer);
	}
	else
		ft_write_nb_into_ltrs(ft_strstr(buffer, nb), buffer);
}

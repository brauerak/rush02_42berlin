/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_nb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:11:39 by irivero-          #+#    #+#             */
/*   Updated: 2023/02/26 14:44:04 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ourlib.h"
#include <unistd.h>

void	ft_convert_nb(char *nb, char *buffer)
{
	int		size;
	int		dg1;
	char	*dg1_w;
	int		dg2;
	char	*dg2_w;
	int		i;

	i = 0;
	size = ft_strlen(nb);
	while (size > 0)
	{
		if (size > 1 && nb[0] == '0')
		{
			write(1, "Dict Error\n", 11);
			break ;
		}
		if (size % 3 == 1)
		{
			dg1 = (nb[i] - 48);
			dg1_w = itoa(dg1);
			ft_write_nb_into_ltrs(ft_strstr(buffer, dg1_w), buffer);
			i = i + 1;
			size = size - 1;
			ft_write_number_power(size, buffer);
		}
		else if (size % 3 == 2)
		{
			dg2 = ((nb[i] - 48) * 10) + (nb[i + 1] - 48);
			dg2_w = itoa(dg2);
			ft_write_nb_in_2digits(dg2_w, buffer);
			i = i + 2;
			size = size - 2;
			ft_write_number_power(size, buffer);
		}
		else if (size % 3 == 0)
		{
			dg1 = (nb[i] - 48);
			dg1_w = itoa(dg1);
			if (nb[i] != '0')
			{
				ft_write_nb_into_ltrs(ft_strstr(buffer, dg1_w), buffer);
				write(1, " ", 1);
				ft_write_nb_into_ltrs(ft_strstr(buffer, "100"), buffer);
			}
			dg2 = ((nb[i + 1] - 48) * 10) + (nb[i + 2] - 48);
			dg2_w = itoa(dg2);
			if (nb[i + 1] != '0' || nb[i + 2] != '0')
			{
				write(1, " ", 1);
				ft_write_nb_in_2digits(dg2_w, buffer);
			}
			size = size - 3;
			if ((size >= 3) && (nb[i] != '0' || nb[i + 1] != '0'
					|| nb[i + 2] != '0'))
				ft_write_number_power(size, buffer);
			i = i + 3;
		}
	}
}

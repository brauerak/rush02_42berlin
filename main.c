/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:56:20 by irivero-          #+#    #+#             */
/*   Updated: 2023/02/26 15:02:40 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ourlib.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	char	*buffer;

	if (argc > 3 || argc == 1)
	{
		ft_putstr("Error\n");
		return (1);
	}
	else if (argc == 2)
	{
		if (ft_error_nbr(argv[1]) == 0)
			return (0);
		buffer = ft_open_read_dict();
		ft_convert_nb(argv[1], buffer);
		free(buffer);
	}
	else if (argc == 3)
	{
		if (ft_error_nbr(argv[2]) == 0)
			return (0);
		buffer = ft_open_read_av(argv[1]);
		ft_convert_nb(argv[2], buffer);
		free(buffer);
	}
	return (0);
}

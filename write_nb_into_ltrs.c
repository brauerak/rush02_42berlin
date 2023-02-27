/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:08:57 by irivero-          #+#    #+#             */
/*   Updated: 2023/02/25 20:15:19 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ourlib.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_write_nb_into_ltrs(char *nb, char *buffer)
{
	char	*start;
	int		i;

	start = ft_strstr(buffer, nb);
	i = 0;
	while (start[i] && start[i] != '\n')
	{
		while (start[i] != ':')
			i++;
		if (start[i] == ':')
			i++;
		while (start[i] == ' ')
			i++;
		while (start[i] >= 32 && start[i] <= 126)
		{
			write(1, &start[i], 1);
			i++;
		}
	}
}

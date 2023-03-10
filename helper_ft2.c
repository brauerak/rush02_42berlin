/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_ft2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrauer <pbrauer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:11:04 by pbrauer           #+#    #+#             */
/*   Updated: 2023/02/25 19:40:04 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ourlib.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	str[i] = '\0';
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
				return (str + i - j);
		}
		else
		{
			i = i - j;
			j = 0;
			i++;
		}
	}
	return (0);
}

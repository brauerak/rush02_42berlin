/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_ft1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:32:43 by irivero-          #+#    #+#             */
/*   Updated: 2023/02/26 17:42:12 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ourlib.h"
#include <unistd.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	i = 0;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

int	ft_nblen(long nb)
{
	int	l;

	l = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		l++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		l++;
	}
	return (l);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	si;

	i = 0;
	result = 0;
	si = 1;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			si *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	result *= si;
	return (result);
}

char	*itoa(int nb)
{
	char	*str;
	long	n;
	int		i;

	n = nb;
	i = ft_nblen(n);
	str = (char *) malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
		str[0] = 48;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[i--] = 48 + (n % 10);
		n /= 10;
	}
	return (str);
}

void	ft_write_number_power(int size, char *buffer)
{
	int		power_size;
	char	*power_size_char;

	if (size >= 3)
	{
		power_size = ft_iterative_power(1000, size / 3);
		power_size_char = itoa(power_size);
		write(1, " ", 1);
		ft_write_nb_into_ltrs(ft_strstr(buffer, power_size_char), buffer);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_read_open.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:15:01 by irivero-          #+#    #+#             */
/*   Updated: 2023/02/26 19:03:06 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ourlib.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char	*ft_open_read_dict(void)
{
	int		fd;
	int		read_f;
	char	*buff;

	buff = malloc((sizeof(char) * 2048));
	fd = open("numbers.dict", O_RDONLY);
	read_f = read(fd, buff, 2048);
	if (!buff)
		return (0);
	if (read_f == -1)
		write(1, "Error\n", 6);
	else
	{
		close(fd);
	}
	return (buff);
}

char	*ft_open_read_av(char	*dico)
{
	int		fd;
	int		read_f;
	char	*buff;

	buff = malloc((sizeof(char) * 2048));
	fd = open(dico, O_RDONLY);
	read_f = read(fd, buff, 2048);
	if (!buff)
		return (0);
	if (read_f == -1)
		write(1, "Error\n", 6);
	else
	{
		close(fd);
	}
	return (buff);
}

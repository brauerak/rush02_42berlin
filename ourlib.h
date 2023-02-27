/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ourlib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:06:18 by irivero-          #+#    #+#             */
/*   Updated: 2023/02/26 18:13:52 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef OURLIB_H
# define OURLIB_H

char	*ft_open_read_dict(void);
char	*ft_open_read_av(char *dico);
int		ft_error_nbr(char *nbr);
int		ft_iterative_power(int nb, int power);
int		ft_nblen(long nb);
int		ft_atoi(char *str);
char	*itoa(int nb);
void	ft_write_number_power(int size, char *buffer);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src);
char	*ft_strstr(char *str, char *to_find);
void	ft_write_nb_into_ltrs(char *nb, char *buffer);
void	ft_write_nb_in_2digits(char *nb, char *buffer);
void	ft_convert_nb(char *nb, char *buffer);
int		main(int argc, char **argv);

#endif

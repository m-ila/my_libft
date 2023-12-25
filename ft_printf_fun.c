/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fun.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbruyant <mbruyant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:57:32 by mbruyant          #+#    #+#             */
/*   Updated: 2023/12/25 21:25:48 by mbruyant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf_str(char *str, int fd)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr_fd("(null)", fd);
		return (6);
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], fd);
		i++;
	}
	return (i);
}

int	ft_printf_char(int c, int fd)
{
	write(1, &c, fd);
	return (1);
}

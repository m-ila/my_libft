/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlen_misc.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbruyant <mbruyant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:25:20 by mbruyant          #+#    #+#             */
/*   Updated: 2023/12/26 19:32:08 by mbruyant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(int argc, char **argv)
{
	if (argc)
	{
		ft_printf_fd(1, "strlen : %d\nstrlen_f : %d\n", ft_strlen(argv[1]), \
		ft_strlen_from(argv[1], ft_atoi(argv[3])));
		ft_printf_fd(1, "strlen_base : %d\n", \
		ft_strlen_base(argv[1], argv[2], ft_atoi(argv[3])));
	}
	return (0);
}

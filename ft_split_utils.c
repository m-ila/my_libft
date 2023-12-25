/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbruyant <mbruyant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 19:19:48 by mbruyant          #+#    #+#             */
/*   Updated: 2023/12/25 21:37:38 by mbruyant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* cherche si un des caractere est dans la base */
bool	ft_only_sep_unbase(char *str, char *base)
{
	int	i;

	if (!str || !*str)
		return (false);
	i = 0;
	while (str[i])
	{
		if (ft_char_in_base(str[i], base))
			return (false);
		i++;
	}
	return (true);
}

/* cherche si un des caractere n'est pas dans la base */
bool	ft_only_sep_base(char *str, char *base)
{
	int	i;

	if (!str || !*str)
		return (false);
	i = 0;
	while (str[i])
	{
		if (!ft_char_in_base(str[i], base))
			return (false);
		i++;
	}
	return (true);
}

char	**ft_split_entry_exit(char *str)
{
	char	**ret;

	if (!str)
		return (NULL);
	ret = (char **)ft_calloc(1, sizeof(char *));
	if (!ret)
		return (NULL);
	return (ret);
}

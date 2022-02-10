/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktuncbil <ktuncbil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:20:34 by ktuncbil          #+#    #+#             */
/*   Updated: 2022/02/10 03:49:52 by ktuncbil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int	i;
	int	j;

	i = 0;
	if (str2[0] == '\0')
		return ((char *)str1);
	while (str1[i] != '\0')
	{
		j = 0;
		while (str1[i + j] == str2[j] && str1[i + j] != '\0')
		{
			if (str2[j + 1] == '\0')
				return ((char *)&str1[i]);
			j++;
		}
		i++;
	}
	return (0);
}

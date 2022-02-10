/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktuncbil <ktuncbil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:12:26 by ktuncbil          #+#    #+#             */
/*   Updated: 2022/02/10 03:54:23 by ktuncbil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*start;

	start = str;
	i = ft_strlen(str);
	str += i;
	while (*str != *start && c != *str)
		str--;
	if (c == *str)
		return ((char *)str);
	return (0);
}

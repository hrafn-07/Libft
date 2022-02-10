/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktuncbil <ktuncbil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:14:31 by ktuncbil          #+#    #+#             */
/*   Updated: 2022/02/10 03:56:21 by ktuncbil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t d_size)
{
	size_t	src_size;
	size_t	i;

	if (!dest || !src)
		return (0);
	src_size = ft_strlen(src);
	i = 0;
	if (d_size != 0)
	{
		while (src[i] != '\0' && i < (d_size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

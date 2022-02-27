/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktuncbil <ktuncbil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:14:31 by ktuncbil          #+#    #+#             */
/*   Updated: 2022/02/27 14:58:08 by ktuncbil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Copy and concatenate total strings respectively.

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	k;
	size_t	l;
	size_t	src_len;
	size_t	dest_len;

	l = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (destsize == 0)
		return (src_len);
	if (destsize < dest_len)
		return (src_len + destsize);
	else
	{
		k = dest_len;
		while (src[l] && (dest_len + l) < destsize)
			dest[k++] = src[l++];
		if ((dest_len + l) == destsize && dest_len < destsize)
			dest[--k] = '\0';
		else
			dest[k] = '\0';
		return (src_len + dest_len);
	}
}

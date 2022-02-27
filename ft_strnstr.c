/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktuncbil <ktuncbil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:07:22 by ktuncbil          #+#    #+#             */
/*   Updated: 2022/02/27 13:14:08 by ktuncbil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Locates the first occurrence of the null-terminated string needle in the 
string haystack, where not more than len characters are searched.*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	c;
	unsigned int	len_needle;

	len_needle = ft_strlen(needle);
	if (len_needle == 0)
		return ((char *) haystack);
	if (len == 0)
		return ((char *) NULL);
	c = 0;
	while (c <= (len - len_needle) && haystack[c] != '\0')
	{
		if (ft_strncmp(&haystack[c], needle, len_needle) == 0)
			return ((char *)&haystack[c]);
		c++;
	}
	return ((char *) NULL);
}

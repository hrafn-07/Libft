/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktuncbil <ktuncbil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 22:40:41 by ktuncbil          #+#    #+#             */
/*   Updated: 2022/02/10 03:49:03 by ktuncbil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	i;

	if ((start + (int)len) > ft_strlen(s))
		return (0);
	arr = (char *) malloc(sizeof(char) *(len + 1));
	if (arr == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		*(arr + i) = *(s + start);
		s++;
		i++;
	}
	*(arr + i) = '\0';
	return (arr);
}

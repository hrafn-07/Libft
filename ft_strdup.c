/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktuncbil <ktuncbil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 04:01:17 by ktuncbil          #+#    #+#             */
/*   Updated: 2022/02/27 17:16:57 by ktuncbil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Returns a pointer to a null-terminated byte string, which is a duplicate of
the string pointed to by s1.*/

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	str = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!str)
		return (0);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

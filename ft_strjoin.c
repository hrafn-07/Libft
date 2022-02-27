/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktuncbil <ktuncbil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 23:40:36 by ktuncbil          #+#    #+#             */
/*   Updated: 2022/02/27 12:33:51 by ktuncbil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates and returns a new string, which is the result of 
the concatenation of ’s1’ and ’s2’*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	ttl_size;
	char	*arr;

	ttl_size = ft_strlen(s1) + ft_strlen(s2);
	arr = (char *) malloc(sizeof(char) * (ttl_size + 1));
	if (!s1 || !s2 || arr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j] != '\0')
	{
		arr[i++] = s1[j];
		j++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		arr[i++] = s2[j];
		j++;
	}
	arr[i] = '\0';
	return (arr);
}

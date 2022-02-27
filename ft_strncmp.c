/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktuncbil <ktuncbil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 12:11:47 by ktuncbil          #+#    #+#             */
/*   Updated: 2022/02/27 13:01:58 by ktuncbil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Compares a specified number of characters of two null terminating strings.

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	if (!s1 && !s2)
		return (0);
	index = 0;
	if (n == 0)
		return (0);
	while ((s1[index] && s2[index]) != '\0'
		&& index < n - 1 && s1[index] == s2[index])
		index++;
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}

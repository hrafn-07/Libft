/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktuncbil <ktuncbil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:12:26 by ktuncbil          #+#    #+#             */
/*   Updated: 2022/02/27 13:22:46 by ktuncbil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Searches for the last occurrence of the character c in the string pointed to.

char	*ft_strrchr(const char *s, int c)
{
	int	sayac;

	sayac = ft_strlen(s);
	while (sayac >= 0)
	{
		if (s[sayac] == (char)c)
			return ((char *)(s + sayac));
		sayac--;
	}
	return (0);
}

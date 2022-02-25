/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktuncbil <ktuncbil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:12:26 by ktuncbil          #+#    #+#             */
/*   Updated: 2022/02/25 19:06:29 by ktuncbil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

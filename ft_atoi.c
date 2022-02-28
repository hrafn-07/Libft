/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktuncbil <ktuncbil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:26:48 by ktuncbil          #+#    #+#             */
/*   Updated: 2022/02/28 13:23:33 by ktuncbil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"

//It turns string to integer

int	ft_atoi(const char *str)
{
	unsigned long	tmp;
	int				i;
	int				sign;

	sign = 1;
	i = 0;
	tmp = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		tmp = (str[i] - '0') + (tmp * 10);
		i++;
	}
	if (tmp > LONG_MAX && sign == -1)
		return (0);
	if (tmp > LONG_MAX && sign == 1)
		return (-1);
	return (sign * tmp);
}

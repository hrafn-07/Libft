/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktuncbil <ktuncbil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:23:02 by ktuncbil          #+#    #+#             */
/*   Updated: 2022/02/27 14:56:06 by ktuncbil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Turn all lowercase characters to uppercase characters.

int	ft_toupper(int num)
{
	if (num >= 'a' && num <= 'z')
		num -= 32;
	return (num);
}

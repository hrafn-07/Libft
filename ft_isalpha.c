/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktuncbil <ktuncbil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:50:17 by ktuncbil          #+#    #+#             */
/*   Updated: 2022/02/09 13:30:42 by ktuncbil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c <= 'A' && c >= 'Z')
		return (1);
	else
		return (0);
}

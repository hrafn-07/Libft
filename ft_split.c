/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktuncbil <ktuncbil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:10:51 by ktuncbil          #+#    #+#             */
/*   Updated: 2022/02/27 11:59:34 by ktuncbil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Returns an array of strings obtained by splitting ’s’ using the character 
’c’ as a delimiter.*/

static int	ft_c_words(char const *str, char c)
{
	int	i;
	int	c_word;

	i = 0;
	c_word = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			c_word++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (c_word);
}

static char	*ft_putword(char *word, char const *s, int i, int word_len)
{
	int	j;

	j = 0;
	while (word_len > 0)
	{
		word[j] = s[i - word_len];
		j++;
		word_len--;
	}
	word[j] = '\0';
	return (word);
}

static char	**ft_split_words(char const *s, char c, char **s2, int num_words)
{
	int	i;
	int	c_word;
	int	word_len;

	i = 0;
	c_word = 0;
	word_len = 0;
	while (c_word < num_words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		s2[c_word] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!s2)
			return (0);
		ft_putword(s2[c_word], s, i, word_len);
		word_len = 0;
		c_word++;
	}
	s2[c_word] = 0;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char			**s2;
	unsigned int	c_words;

	if (!s)
		return (0);
	c_words = ft_c_words(s, c);
	s2 = (char **)malloc(sizeof(char *) * (c_words + 1));
	if (!s2)
		return (0);
	ft_split_words(s, c, s2, c_words);
	return (s2);
}

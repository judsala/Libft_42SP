/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:13:07 by coder             #+#    #+#             */
/*   Updated: 2022/09/20 08:36:16 by jdantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	w_counter(const char *s, char c)
{
	int	i;
	int	count;

i = 0;
count = 0;
	while (*s)
	{
		if (*s != c && count == 0)
		{
			count = 1;
			i++;
		}
		else if (*s == c)
			count = 0;
			s++;
	}
	return (i);
}

static	int	w_len(const char *s, char c)
{
	size_t	length;

	length = 0;
	while (*s && *s != c)
	{
		length++;
		s++;
	}
	return (length);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		counter;
	int		len;
	char	**res;

	i = 0;
	counter = w_counter(str, c);
	res = (char **)malloc(sizeof (char *) * (counter + 1));
	if (res == NULL)
		return (NULL);
	while (*str && i < counter)
	{
		while (*str == c)
			str++;
		if (*str != c)
		{
			len = w_len(str, c);
			*(res + i) = ft_substr(str, 0, len);
			i++;
		}
		while (*str != c && *str)
			str++;
	}
	*(res + counter) = NULL;
	return (res);
}

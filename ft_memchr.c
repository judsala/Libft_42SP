/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:52:33 by coder             #+#    #+#             */
/*   Updated: 2022/09/22 10:12:19 by jdantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	size_t			index;

	s = (unsigned char *)str;
	index = 0;
	while (index < n)
	{
		if (s[index] == (unsigned char)c)
			return ((void *)s + index);
		index++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:32:51 by coder             #+#    #+#             */
/*   Updated: 2022/09/19 08:58:25 by jdantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	n;

	n = (int)ft_strlen(s);
	while (n >= 0)
	{
		if (s[n] == (char)c)
			return (&(((char *)s)[n]));
		n--;
	}	
	if (c == '\0')
		return (&(((char *)s)[n]));
	return (NULL);
}

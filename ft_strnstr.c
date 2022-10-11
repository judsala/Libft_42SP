/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:08:24 by coder             #+#    #+#             */
/*   Updated: 2022/09/19 09:38:27 by jdantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;
	size_t	j;

	index = 0;
	if (little[index] == '\0')
		return ((char *)big);
	while (index < len && big[index] != '\0')
	{
		j = 0;
		while (big[index + j] == little[j] && index + j < len)
		{
			if (little[j + 1] == '\0')
				return (&(((char *)big)[index]));
			j++;
		}
		index++;
	}	
	return (0x0);
}

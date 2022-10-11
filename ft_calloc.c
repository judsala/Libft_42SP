/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:47:40 by coder             #+#    #+#             */
/*   Updated: 2022/09/19 11:18:31 by jdantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	result;

	result = count * size;
	p = (void *)malloc(result);
	if (result / count != size || result / size != count || !result)
		return (NULL);
	ft_bzero(p, result);
	return (p);
}

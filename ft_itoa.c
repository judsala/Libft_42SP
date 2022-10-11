/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:10:23 by coder             #+#    #+#             */
/*   Updated: 2022/09/27 07:58:44 by jdantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static void	nbr_len(char *s, int n, size_t size)
{
	s[size] = '\0';
	size--;
	if (n >= 0)
	{
		while (size)
		{
		s[size] = (n % 10) + '0';
		n = n / 10;
		size--;
		}
		s[size] = n + '0';
	}
	else
	{
		while (size)
		{
			s[size] = (n % 10) * -1 + '0';
			n = n / 10;
			size--;
		}
		s[size] = '-';
	}
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	size;
	int		t;

	if (n >= 0)
	size = 1;
	else
	size = 2;
	t = n / 10;
	while (t)
	{
		size++;
		t = t / 10;
	}
	result = malloc(size + 1);
	if (!result)
		return (NULL);
	nbr_len(result, n, size);
	return (result);
}

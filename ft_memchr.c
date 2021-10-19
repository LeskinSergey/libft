/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbombadi <sbombadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:36:51 by sbombadi          #+#    #+#             */
/*   Updated: 2021/10/13 15:37:27 by sbombadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*s1;

	i = 0;
	s1 = (char *)str;
	while (i < n)
	{
		if (s1[i] == (char)c)
			return ((void *)(&s1[i]));
		i++;
	}
	return (NULL);
}

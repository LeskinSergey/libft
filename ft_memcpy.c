/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbombadi <sbombadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:37:05 by sbombadi          #+#    #+#             */
/*   Updated: 2021/10/13 15:37:25 by sbombadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str;
	char	*str1;
	size_t	i;

	str = (char *)dest;
	str1 = (char *)src;
	i = 0;
	if (str == 0 && str1 == 0)
		return (0);
	while (i < n)
	{
		str[i] = str1[i];
		i++;
	}
	return (dest);
}

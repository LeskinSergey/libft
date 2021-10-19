/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbombadi <sbombadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:40:39 by sbombadi          #+#    #+#             */
/*   Updated: 2021/10/13 15:40:41 by sbombadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	i;
	char	*str;
	int		j;

	j = 0;
	i = (char)c;
	str = (char *)s;
	while (str[j])
		j++;
	while (j >= 0)
	{
		if (str[j] == i)
			return (&str[j]);
		j--;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbombadi <sbombadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:40:52 by sbombadi          #+#    #+#             */
/*   Updated: 2021/10/13 20:21:41 by sbombadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	size_t			m_size;

	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		len = 0;
	if ((int)len > ft_strlen(s))
		m_size = ft_strlen(s);
	else
		m_size = len;
	str = malloc(sizeof(char) * m_size + 1);
	i = 0;
	s += start;
	if (str)
	{
		str[len] = '\0';
		while (i < len)
			str[i++] = *s++;
	}
	return (str);
}

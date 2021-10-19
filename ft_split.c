/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbombadi <sbombadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:58:06 by sbombadi          #+#    #+#             */
/*   Updated: 2021/10/13 18:13:46 by sbombadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_strs_count(char const *str, char _c)
{
	size_t	result;
	size_t	i;
	size_t	l;

	i = 0;
	result = 0;
	l = ft_strlen(str);
	while (*(str + i))
	{
		while (*(str + i) == _c)
			i++;
		if (i == l)
			break ;
		while (*(str + i) != _c && *(str + i))
			i++;
		result++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;
	size_t	n;

	result = (char **)malloc((get_strs_count(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	n = 0;
	while (*(s + i))
	{
		while (*(s + i) == c)
			i++;
		if (i == (size_t)ft_strlen(s))
			break ;
		j = i;
		while (*(s + j) != c && *(s + j))
			j++;
		*(result + n++) = ft_substr(s, (unsigned int)i, j - i);
		i = j;
	}
	*(result + n) = NULL;
	return (result);
}

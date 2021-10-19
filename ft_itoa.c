/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbombadi <sbombadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:36:45 by sbombadi          #+#    #+#             */
/*   Updated: 2021/10/13 15:37:28 by sbombadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i = 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		f;
	int		len;
	char	*s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	f = 0;
	if (n < 0)
	{
		f = 1;
		n *= -1;
	}
	len = ft_nbrlen(n);
	s = (char *)malloc(sizeof(char) * len + f + 1);
	if (!s)
		return (NULL);
	s[len + f] = '\0';
	while (len > 0)
	{
		s[--len + f] = n % 10 + 48;
		n /= 10;
	}
	if (f)
		s[0] = '-';
	return (s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbombadi <sbombadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:36:09 by sbombadi          #+#    #+#             */
/*   Updated: 2021/10/13 15:37:51 by sbombadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void	*b, int c)
{
	int				i;
	unsigned char	*p;

	p = b;
	i = 0;
	while (c > 0)
	{
		*p = 0;
		p++;
		c--;
	}
	return (b);
}

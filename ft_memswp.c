/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 00:34:20 by julin             #+#    #+#             */
/*   Updated: 2017/12/01 00:34:37 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memswp(void *a, void *b, size_t len)
{
	size_t			i;
	unsigned char	tmp;
	unsigned char	*a_p;
	unsigned char	*b_p;

	i = 0;
	a_p = (unsigned char *)a;
	b_p = (unsigned char *)b;
	while (i < len)
	{
		tmp = *a_p;
		*a_p = *b_p;
		*b_p = tmp;
		i++;
	}
}

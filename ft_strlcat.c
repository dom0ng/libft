/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 19:14:17 by julin             #+#    #+#             */
/*   Updated: 2017/11/16 19:14:20 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	while (dst[j] && j < size)
		j = j + 1;
	while ((src[k]) && ((j + k + 1) < size))
	{
		dst[j + k] = src[k];
		k = k + 1;
	}
	if (j != size)
		dst[j + k] = '\0';
	return (j + ft_strlen(src));
}

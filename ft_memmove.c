/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 19:26:00 by julin             #+#    #+#             */
/*   Updated: 2017/11/30 22:23:52 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str1;
	char	*str2;

	str1 = (char *)dst;
	str2 = (char *)src;
	if (len == 0)
		return (dst);
	if (str2 < str1)
	{
		str1 = str1 + len - 1;
		str2 = str2 + len - 1;
		while (len-- > 0)
			*str1-- = *str2--;
	}
	else
	{
		while (len > 0)
		{
			*str1++ = *str2++;
			len--;
		}
	}
	return (dst);
}

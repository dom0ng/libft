/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 19:11:30 by julin             #+#    #+#             */
/*   Updated: 2017/11/30 22:29:05 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	new_str = NULL;
	if (s != NULL && (f) != NULL)
	{
		i = 0;
		while (s[i] != '\0')
			i++;
		new_str = malloc(sizeof(char) * i + 1);
		i = 0;
		if (new_str != NULL)
		{
			while (s[i] != '\0')
			{
				new_str[i] = (f)(i, s[i]);
				i++;
			}
			new_str[i] = '\0';
		}
	}
	return (new_str);
}

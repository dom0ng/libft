/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 07:11:02 by julin             #+#    #+#             */
/*   Updated: 2018/09/02 07:11:16 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strjoin_and_free(char *s1, char *s2, int ret, int *clen)
{
	char	*str;

	(*clen) = (*clen) + ret;
	str = (char*)malloc(sizeof(char) * ((*clen) + 1));
	if (str == NULL)
		return (NULL);
	str[(*clen)] = '\0';
	str = ft_strcpy(str, s1);
	str = ft_strcat(str, s2);
	if ((*clen - ret))
		free(s1);
	return (str);
}

char			*ft_read(int fd)
{
	int		ret;
	int		clen;
	char	buffer[BUFF_SIZE + 1];
	char	*new;

	clen = 0;
	new = "\0";
	while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[ret] = '\0';
		new = ft_strjoin_and_free(new, buffer, ret, &clen);
		if (new == NULL)
			return (NULL);
	}
	return (new);
}

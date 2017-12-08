/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 19:04:01 by julin             #+#    #+#             */
/*   Updated: 2017/11/30 22:34:58 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_blank(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

static int	c_count(char const *s)
{
	int	i;
	int	j;

	i = 0;
	j = (int)ft_strlen(s) - 1;
	while (is_blank(s[i]))
		i++;
	while (is_blank(s[j]))
		j--;
	if (j - i < 0)
		return (0);
	return ((j - i) + 1);
}

char		*ft_strtrim(char const *s)
{
	char	*new;
	int		i;
	int		n;

	i = 0;
	n = 0;
	if (!s)
		return (NULL);
	new = (char *)malloc(sizeof(char) * (c_count(s) + 1));
	if (new == NULL)
		return (NULL);
	while (is_blank(s[i]))
		i++;
	while (s[i])
		new[n++] = s[i++];
	n--;
	while (is_blank(new[n]))
		n--;
	new[++n] = '\0';
	return (new);
}

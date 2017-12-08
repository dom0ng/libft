/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 19:05:37 by julin             #+#    #+#             */
/*   Updated: 2017/11/16 19:05:41 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	size = 0;
	while (to_find[size] != '\0')
		size = size + 1;
	if (size == 0)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (j == size - 1)
				return (str + i);
			j = j + 1;
		}
		i = i + 1;
	}
	return (0);
}

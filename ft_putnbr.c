/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 19:21:08 by julin             #+#    #+#             */
/*   Updated: 2017/11/30 23:56:32 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	next(long nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		next(nb / 10);
		next(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

void		ft_putnbr(int nb)
{
	long trans;

	trans = nb;
	next(trans);
}

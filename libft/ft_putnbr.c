/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiehn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 21:43:45 by bkiehn            #+#    #+#             */
/*   Updated: 2018/11/30 22:14:32 by bkiehn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		n = -(n % 1000000000);
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n / 10 > 0)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
	else
		ft_putchar((n % 10) + '0');
}

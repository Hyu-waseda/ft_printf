/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_di.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okumurahyu <okumurahyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:15:40 by okumurahyu        #+#    #+#             */
/*   Updated: 2022/02/11 15:55:00 by okumurahyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_di(int nb, int *count)
{
	char			c;
	long long int	num;

	num = nb;
	if (num < 0)
	{
		num *= -1;
		write(1, "-", 1);
		(*count)++;
	}
	if (num >= 10)
	{
		ft_put_di(num / 10, count);
		num = num % 10;
	}
	c = '0' + num;
	ft_put_c(c, count);
}

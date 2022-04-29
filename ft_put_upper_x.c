/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_upper_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okumurahyu <okumurahyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:19:15 by okumurahyu        #+#    #+#             */
/*   Updated: 2022/02/11 15:55:19 by okumurahyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_upper_x(unsigned int n, int *count)
{
	char	c;

	if (n >= 16)
	{
		ft_put_upper_x(n / 16, count);
	}
	if (n % 16 < 10)
		c = '0' + n % 16;
	else
		c = 'A' + n % 16 % 10;
	ft_put_c(c, count);
}

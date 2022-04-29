/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okumurahyu <okumurahyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:14:19 by okumurahyu        #+#    #+#             */
/*   Updated: 2022/02/11 15:55:08 by okumurahyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_p(unsigned long long n, int *count)
{
	char	c;

	if (n >= 16)
	{
		ft_put_p(n / 16, count);
	}
	if (n % 16 < 10)
		c = '0' + n % 16;
	else
		c = 'a' + n % 16 % 10;
	ft_put_c(c, count);
}

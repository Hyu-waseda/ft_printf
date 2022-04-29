/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_lower_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okumurahyu <okumurahyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:18:35 by okumurahyu        #+#    #+#             */
/*   Updated: 2022/02/11 15:55:04 by okumurahyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_lower_x(unsigned int n, int *count)
{
	char	c;

	if (n >= 16)
	{
		ft_put_lower_x(n / 16, count);
	}
	if (n % 16 < 10)
		c = '0' + n % 16;
	else
		c = 'a' + n % 16 % 10;
	ft_put_c(c, count);
}

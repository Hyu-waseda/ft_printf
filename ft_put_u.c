/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okumurahyu <okumurahyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:16:33 by okumurahyu        #+#    #+#             */
/*   Updated: 2022/02/11 15:55:15 by okumurahyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_u(unsigned int n, int *count)
{
	char			c;

	if (n >= 10)
	{
		ft_put_di(n / 10, count);
		n = n % 10;
	}
	c = '0' + n;
	ft_put_c(c, count);
}

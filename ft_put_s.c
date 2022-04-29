/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okumurahyu <okumurahyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:12:20 by okumurahyu        #+#    #+#             */
/*   Updated: 2022/02/11 15:55:11 by okumurahyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_s(char *str, int *count)
{
	int	i;

	if (str == 0)
	{
		write(1, "(null)", 6);
		(*count) += 6;
		return (6);
	}
	i = 0;
	while (str[i] != '\0')
	{
		ft_put_c(str[i], count);
		str++;
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okumurahyu <okumurahyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:51:44 by okumurahyu        #+#    #+#             */
/*   Updated: 2022/02/09 11:48:55 by okumurahyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check_format(va_list *args, const char *format, int *count);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format != '%')
		{
			ft_put_c(*format, &count);
		}
		else if (*format == '%')
		{
			format++;
			check_format(&args, format, &count);
		}
		format++;
	}
	va_end(args);
	return (count);
}

static void	check_format(va_list *args, const char *format, int *count)
{
	if (*format != '\0' && *format == 'c')
		ft_put_c(va_arg(*args, int), count);
	else if (*format != '\0' && *format == 's')
		ft_put_s(va_arg(*args, char *), count);
	else if (*format != '\0' && *format == 'p')
	{
		ft_put_s("0x", count);
		ft_put_p(va_arg(*args, unsigned long long), count);
	}
	else if (*format != '\0' && (*format == 'd' || *format == 'i'))
		ft_put_di(va_arg(*args, int), count);
	else if (*format != '\0' && *format == 'u')
		ft_put_u(va_arg(*args, unsigned int), count);
	else if (*format != '\0' && *format == 'x')
		ft_put_lower_x(va_arg(*args, unsigned int), count);
	else if (*format != '\0' && *format == 'X')
		ft_put_upper_x(va_arg(*args, unsigned int), count);
	else if (*format != '\0' && *format == '%')
		ft_put_c('%', count);
}

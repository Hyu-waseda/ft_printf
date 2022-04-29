/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okumurahyu <okumurahyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:53:39 by okumurahyu        #+#    #+#             */
/*   Updated: 2022/04/29 23:26:22 by okumurahyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<stdio.h>
# include	<unistd.h>
# include	<string.h>
# include	<stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_put_c(char c, int *count);
int		ft_put_s(char *str, int *count);
void	ft_put_p(unsigned long long n, int *count);
void	ft_put_di(int nb, int *count);
void	ft_put_u(unsigned int n, int *count);
void	ft_put_lower_x(unsigned int n, int *count);
void	ft_put_upper_x(unsigned int n, int *count);
#endif
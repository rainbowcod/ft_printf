/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 21:07:48 by olmatske          #+#    #+#             */
/*   Updated: 2025/08/01 21:12:22 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
#include <stdarg.h>

int	ft_putchar(char c);
int	putnbr(int n);
int	ft_printf(const char *format, ...);
int	ft_putstr(char *str);
int	hexconvert(unsigned int n, char *hex);

#endif
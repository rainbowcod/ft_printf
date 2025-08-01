/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 17:51:52 by olmatske          #+#    #+#             */
/*   Updated: 2025/08/01 21:09:46 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	format_type(const char *format, int i, va_list args);
static int	printit(const char *format, va_list args);

int	ft_printf(const char *format, ...)
{
	int	count;
	va_list	args;

	va_start(args, format);
	count = printit(format, args);
	printit(format, args);
	va_end(args);
	return (count);
}

static int	printit(const char *format, va_list args)
{
	int	i;
	int	count;
	int	flag;

	i = 0;
	count = 0;
	flag = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			flag = format_type(format, ++i, args);
			if (flag == -1)
				return (-1);
			count += 2;
		}
		else
		{
			if (ft_putchar(format[i] == -1))
				return (-1);
			count++;
		}
		i++;
	}
	return (count);
}

static int	format_type(const char *format, int i, va_list args)
{
	if (format[i] == 'c')
		return (va_arg(args, char c));
	else if (format[i] == 's')
		return (va_arg(args, char *));
	else if (format[i] == 'p')
		return (va_arg(args, void *));
	else if (format[i] == 'd')
		return (va_arg(args, int));
	else if (format[i] == 'i')
		return (va_arg(args, int));
	else if (format[i] == 'u')
		return (va_arg(args, unsigned int));
	else if (format[i] == 'x')
		return (hexconvert(va_arg(args, unsigned int), "012456789abcdef"));
	else if (format[i] == 'X')
		return (hexconvert(va_arg(args, unsigned int), "012456789ABCDEF"));
	else if (format[i] == '%')
		return (ft_putchar('%'));
	return (0);
}
// printf does the basic function calling
// printit does the writing up until it encounters the %,
// calls formattype, writes arg, goes back and continues until
// null terminator is reached
// hex??? wtf do I do and how do I do it
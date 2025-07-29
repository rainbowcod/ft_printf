/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 17:51:52 by olmatske          #+#    #+#             */
/*   Updated: 2025/07/29 23:44:07 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

static int	format_type(char c);
static int	hexconvert(int n);
static int	printit(va_list args, )

int	ft_printf(const char *format, ...)
{
	va_list	args;
	va_start(args, format);
	ft_printit(args, format);


}

static int	format_type(char c)
{
	if (c == "c")
		return (va_arg(args, char));
	if (c == "s")
		return (va_arg(args, char *));
	if (c == "p")
		return (va_arg(args, void *));
	if (c == "d")
		return (va_arg(args, int));
	if (c == "i")
		return (va_arg(args, int));
	if (c == "u")
		return (va_arg(args, unsigned int));
	if (c == "x")
		return (va_arg(args, char *));
	if (c == "X")
		return (va_arg(args, char *));
	if (c == "c")
		return (ft_putchar('%'));
}
static int	printit(va_list args, const char *format)
{

}
// printf does the basic function calling
// printit does the writing up until it encounters the %,
// calls formattype, writes arg, goes back and continues until
// null terminator is reached
// hex??? wtf do I do and how do I do it
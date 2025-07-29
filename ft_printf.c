/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 17:51:52 by olmatske          #+#    #+#             */
/*   Updated: 2025/07/29 18:48:47 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

static int	format_type(char c);
static int	hexconvert(int n);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	va_start(args, format);
	
}

static int	format_type(char c)
{
	if (c == "c")
		return ()
}
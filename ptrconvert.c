/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptrconvert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 12:35:19 by olmatske          #+#    #+#             */
/*   Updated: 2025/08/02 14:12:20 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptrconvert(void *ptr)
{
	unsigned long	res;
	int				count;

	res = (unsigned long)ptr;
	count = 0;
	if (res == 0)
	{
		if (ft_putstr(NULL_PTR) == -1)
			return (-1);
		return (ft_strlen(NULL_PTR));
	}
	if (ft_putstr("0x") == -1)
		return (-1);
	count += 2;
	count = hexconvert(res, "0123456789abcdef");
	return (count);
}

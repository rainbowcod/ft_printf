/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 18:10:44 by olmatske          #+#    #+#             */
/*   Updated: 2025/07/28 17:39:30 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	putnbr(int n)
{
	long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num > 9)
	{
		putnbr(num / 10);
		putnbr(num % 10);
	}
	else
		ft_putchar(num + '0');
	return (num);
}
int	ft_putchar(char	c)
{
	if ((write(1, &c, 1)) == -1)
		return (-1);
	return (1);
}

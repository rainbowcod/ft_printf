/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 17:20:22 by olmatske          #+#    #+#             */
/*   Updated: 2025/07/29 16:09:40 by olmatske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == NULL)
			return (ft_putstr("(null)"));
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
int	ft_putchar(char	c)
{
	if ((write(1, &c, 1)) == -1)
		return (-1);
	return (1);
}

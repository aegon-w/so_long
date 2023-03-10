/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-boukel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:04:33 by m-boukel          #+#    #+#             */
/*   Updated: 2023/01/26 15:05:19 by m-boukel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr1(char *s, int *len)
{
	if (s)
	{
		write(1, s, ft_strlen1(s));
		*len = *len + ft_strlen1(s);
	}
	else
	{
		write(1, "(null)", 6);
		*len = *len + 6;
	}
}

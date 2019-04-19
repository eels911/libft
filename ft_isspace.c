/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrieda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 15:21:50 by rfrieda           #+#    #+#             */
/*   Updated: 2019/04/19 15:28:27 by rfrieda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if ((unsigned char)c == ' ' || (unsigned char)c == '\t' ||
			(unsigned char)c == '\n' || (unsigned char)c == '\v'
			|| (unsigned char)c == '\f' || (unsigned char)c == '\r')
		return (1);
	return (0);
}

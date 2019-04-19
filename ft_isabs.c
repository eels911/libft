/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isabs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrieda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 15:53:13 by rfrieda           #+#    #+#             */
/*   Updated: 2019/04/19 17:11:59 by rfrieda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_isabs(int *n, int *sign)
{
	if (*n < 0)
	{
		*n = (*n * -1);
		*sign = -1;
	}
	else
		*sign = 1;
}

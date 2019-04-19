/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrieda <rfrieda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 17:19:44 by rfrieda           #+#    #+#             */
/*   Updated: 2019/04/14 17:44:01 by rfrieda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t count)
{
	unsigned char		*d;
	const unsigned char	*s;
	const unsigned char	*lasts;
	unsigned char		*lastd;

	d = dest;
	s = source;
	lastd = d + (count - 1);
	lasts = s + (count - 1);
	if (d < s)
		while (count-- > 0)
			*d++ = *s++;
	else
		while (count-- > 0)
			*lastd-- = *lasts--;
	return (dest);
}

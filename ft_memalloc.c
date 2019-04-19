/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrieda <rfrieda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:06:18 by rfrieda           #+#    #+#             */
/*   Updated: 2019/04/17 19:27:11 by rfrieda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void		*ft_memalloc(size_t size)
{
	char	*t;
	size_t	i;

	i = 0;
	if ((t = malloc(size)) == NULL)
		return (NULL);
	while (i < size)
	{
		t[i] = 0;
		i++;
	}
	return (t);
}

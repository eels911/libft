/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrieda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 15:30:59 by rfrieda           #+#    #+#             */
/*   Updated: 2019/04/19 15:32:55 by rfrieda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*new_str;

	if (!(new_str = (char *)malloc(sizeof(*new_str) * (n + 1))))
		return (NULL);
	return (ft_strncpy(new_str, s1, n));
}

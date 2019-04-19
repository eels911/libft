/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrieda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 14:26:36 by rfrieda           #+#    #+#             */
/*   Updated: 2019/04/14 14:36:52 by rfrieda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t num)
{
	size_t	len;
	size_t	len2;
	int		result;

	len = ft_strlen(s1) + 1;
	len2 = ft_strlen(s2) + 1;
	len = (len <= num) ? len : num;
	result = ft_memcmp(s1, s2, len);
	return (result);
}

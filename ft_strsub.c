/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrieda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 19:38:55 by rfrieda           #+#    #+#             */
/*   Updated: 2019/04/17 19:40:16 by rfrieda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	cur;

	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (!str || !s || start + len > ft_strlen(s))
		return (NULL);
	cur = 0;
	while (cur < len)
	{
		str[cur] = s[start + cur];
		cur++;
	}
	str[cur] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrieda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 19:56:32 by rfrieda           #+#    #+#             */
/*   Updated: 2019/04/18 19:32:27 by rfrieda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_trimlen(char *s)
{
	size_t	i;
	size_t	spaces;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
	}
	spaces = i;
	if (s[i] != '\0')
	{
		i = len - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			i--;
			spaces++;
		}
	}
	return (len - spaces);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	trim_len;

	if (s)
	{
		i = 0;
		j = 0;
		str = (char *)malloc(sizeof(*str) * (ft_trimlen((char *)s) + 1));
		if (str)
		{
			trim_len = ft_trimlen((char *)s);
			while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
				i++;
			while (j < trim_len)
				str[j++] = s[i++];
			str[j] = '\0';
			return (str);
		}
	}
	return (NULL);
}

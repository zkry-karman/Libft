/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:32:30 by zkarman           #+#    #+#             */
/*   Updated: 2025/11/24 14:46:55 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

static char	newstr(char const *s, char *sub, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	return (*sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			slen;
	char			*sub;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
	{
		sub = malloc(1);
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	if (len > slen - start)
		len = slen - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	newstr(s, sub, start, len);
	sub[len] = '\0';
	return (sub);
}
/*
#include "stdio.h"
int	main(void)
{
	char		s[] = "Hello how are you";
	unsigned int	start = 3;
	size_t		len = 5;

	printf("%s\n", ft_substr(s, start, len));
	return 0;
}
*/

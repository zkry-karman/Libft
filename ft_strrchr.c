/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:46:24 by zkarman           #+#    #+#             */
/*   Updated: 2025/11/23 15:58:24 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char) c)
			last = s;
		s++;
	}
	if ((char) c == '\0')
		return ((char *)s);
	return ((char *)last);
}
/*
#include "stdio.h"
int	main(void)
{
	char s[100] = "Find the first i in this string";
	int c = '\0';

	char *result = ft_strrchr(s, c);

	if (result)
		printf("%s\n", result);
	else
		printf("character not found.\n");

	return 0;
}
*/

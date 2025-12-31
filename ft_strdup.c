/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:39:34 by zkarman           #+#    #+#             */
/*   Updated: 2025/11/23 17:59:26 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_strdup(const char *s)
{
	int		slen;
	char	*dup;
	int		i;

	slen = 0;
	while (s[slen])
		slen++;
	dup = (char *) malloc(sizeof(char) * (slen + 1));
	if (dup == NULL)
		return ((char *)(NULL));
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
#include "stdio.h"
int	main(void)
{
	char	str[8] = "goose :)";
	char	*dup;

	dup = ft_strdup(str);
	if(dup == NULL)
		return 1;
	printf("%s\n", dup);
	free (dup);
	return (0);
}
*/

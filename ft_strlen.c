/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:49:06 by zkarman           #+#    #+#             */
/*   Updated: 2025/11/22 15:23:42 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
#include "stdio.h"
int	main(void)
{
	printf("%ld\n", ft_strlen("Here is a string"));
	printf("%ld\n", ft_strlen(" "));
	printf("%ld\n", ft_strlen("Another one"));
	printf("%ld\n", ft_strlen("1234567890"));
	printf("%ld\n", ft_strlen("abcdef123456"));
	printf("%ld\n", ft_strlen(""));
}
*/

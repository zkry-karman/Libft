/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:52:21 by zkarman           #+#    #+#             */
/*   Updated: 2025/11/23 17:47:50 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	while ((a[i] || b[i]) && i < n)
	{
		if (a[i] == b[i])
			i++;
		else if (a[i] != b[i])
			return (a[i] - b[i]);
	}
	return (0);
}
/*
#include "stdio.h"
int	main(void)
{
	char	a[] = "test\200";
	char	b[] = "test\0";
	int	i;

	i = ft_strncmp(a, b, 6);
	printf("%d", i);
}
*/

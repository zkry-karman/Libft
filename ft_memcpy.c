/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:22:14 by zkarman           #+#    #+#             */
/*   Updated: 2025/11/23 17:46:28 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == s || n == 0)
		return (dest);
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
/*
#include "stdio.h"
int	main(void)
{
	char	src[] = "Copy this string to destination";
	char	dst[50];

	ft_memcpy(dst, src, 25 + 1);
	printf("%s\n", dst);

	return 0;
}
*/

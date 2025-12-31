/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:16:59 by zkarman           #+#    #+#             */
/*   Updated: 2025/11/22 15:25:57 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;

	dstlen = 0;
	while (dst[dstlen])
		dstlen++;
	srclen = 0;
	while (src[srclen])
		srclen++;
	if (siz <= dstlen)
		return (srclen + siz);
	i = 0;
	while (src[i] && dstlen + i < siz - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
/*
#include "stdio.h"
int	main(void)
{
	char	src[] = " to thi$ 5Tring";
	char	dest[19] = "Copy this";

	printf("%li\n", ft_strlcat(dest, src, 15));
	printf("%s\n", dest);
	return 0;
}
*/

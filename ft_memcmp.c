/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:09:33 by zkarman           #+#    #+#             */
/*   Updated: 2025/11/23 18:13:09 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*a;
	unsigned const char	*b;
	size_t				i;

	a = (const unsigned char *) s1;
	b = (const unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (a[i] == b[i])
			i++;
		else
			return (a[i] - b[i]);
	}
	return (0);
}
/*
#include "stdio.h"
int	main(void)
{
	char	a[] = "Coapare this string";
	char	b[] = "Compare this string";

	printf("%d\n", ft_memcmp(a, b, 7));
	return 0;

}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:11:48 by zkarman           #+#    #+#             */
/*   Updated: 2025/11/24 14:57:13 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

static int	count_size(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	putnbr(int count, int i, char *dst, long num)
{
	while (count > i)
	{
		count --;
		dst[count] = (num % 10) + '0';
		num /= 10;
	}
	return (*dst);
}

char	*ft_itoa(int n)
{
	char	*dst;
	int		count;
	int		i;
	long	num;

	num = n;
	count = count_size(num);
	i = 0;
	if (num < 0)
		count++;
	dst = malloc(count + 1);
	if (!dst)
		return (NULL);
	if (num < 0)
	{
		dst[0] = '-';
		num = -num;
		i = 1;
	}
	dst[count] = '\0';
	putnbr(count, i, dst, num);
	return (dst);
}
/*
#include "stdio.h"
int	main(void)
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-666));
	printf("%s\n", ft_itoa(455214));
	printf("%s\n", ft_itoa(-96));
	printf("%s\n", ft_itoa(47));
	printf("%s\n", ft_itoa('Z'));
	return 0;
}
*/

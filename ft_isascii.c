/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:31:40 by zkarman           #+#    #+#             */
/*   Updated: 2025/11/22 16:24:23 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*
#include "stdio.h"
int	main(void)
{
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isascii('$'));
	printf("%d\n", ft_isascii('\n'));
	printf("%d\n", ft_isascii('	'));
	printf("%d\n", ft_isascii(150));
	printf("%d\n", ft_isascii(-5));

	return 0;
}
*/

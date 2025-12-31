/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:03:49 by zkarman           #+#    #+#             */
/*   Updated: 2025/11/23 18:12:36 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (c);
	else
		return (0);
}

/*
#include "stdio.h"
int     main(void)
{
        char    a = '$';
        char    b = 'W';
        char    c = '8';
        char    d = 'z';
        char    e = ' ';

        printf("%d\n", ft_isalnum(a));
        printf("%d\n", ft_isalnum(b));
        printf("%d\n", ft_isalnum(c));
        printf("%d\n", ft_isalnum(d));
        printf("%d\n", ft_isalnum(e));

        return 0;
}
*/

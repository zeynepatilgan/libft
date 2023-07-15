/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeatilga <zeatilga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:49:31 by zeatilga          #+#    #+#             */
/*   Updated: 2023/07/10 23:38:24 by zeatilga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src > dst)
		ft_memcpy(dst, src, len);
	i = len;
	i--;
	if (src < dst)
	{
		while (len--)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
	}
	return ((char *)dst);
}
/*
int	main()
{
	char test[10]= "o";
	char test2[10]= "z";
	char *a;

	a = ft_memmove(test,test2,10);
	printf("%s",test);
}
*/
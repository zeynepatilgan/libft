/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeatilga <zeatilga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:08:56 by zeatilga          #+#    #+#             */
/*   Updated: 2023/07/10 22:45:35 by zeatilga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char) str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
/*
Program memchr() fonksiyonu ile bir karakter dizisi içinde
'm' karakterini arar.
nesnenin ilk boyut baytı içindeki ilk c
 (bir unsigned char'a dönüştürülmüş) baytını bulur.
 Dönen değer baytın konumunu içeren bir göstericidir.
 c baytı bulunamazsa bir boş gösterici döner.

*/

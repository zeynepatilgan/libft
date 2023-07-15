/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeatilga <zeatilga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:49:38 by zeatilga          #+#    #+#             */
/*   Updated: 2023/07/13 16:08:14 by zeatilga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest2;
	char	*src2;
	size_t	i;

	i = 0;
	dest2 = (char *) dest;
	src2 = (char *) src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest2);
}

/*
int	main()
{
	char test[10]= "ahmet";
	
	char *a;

	a = ft_memcpy(test + 2, test,6);
	printf("%s",a);
}
*/
// ft_memcpy >> srcden aldığı byteleri deste yapıştırır.
// strcpy'den farkı stringten farklı olarak int,float gibi bütün değişkenleri
// kopyalayabilmesi.
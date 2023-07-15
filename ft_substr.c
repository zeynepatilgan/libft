/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeatilga <zeatilga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:46:52 by zeatilga          #+#    #+#             */
/*   Updated: 2023/07/11 05:51:59 by zeatilga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	a;

	a = 0;
	if (!s)
		return (0);
	while (s[a] && a < len)
		a++;
	str = (char *)malloc(a + 1);
	if (!str)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}

/*
int	main()
{
	char test[] = "benzeynep";
	printf("%s",ft_substr(test,1,3));
}
*/

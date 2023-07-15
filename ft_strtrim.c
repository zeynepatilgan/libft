/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeatilga <zeatilga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:47:11 by zeatilga          #+#    #+#             */
/*   Updated: 2023/07/11 05:42:58 by zeatilga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	setktrl(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	int		a;
	char	*str;

	i = 0;
	a = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (s1[i] != '\0' && setktrl (s1[i], set))
		i++;
	while (i < len && setktrl (s1[len -1], set))
		len--;
	str = (char *)malloc(sizeof(char) * ((len - i) + 1));
	if (str == NULL)
		return (NULL);
	while (i < len)
		str[a++] = s1[i++];
	str[a] = '\0';
	return (str);
}
/*
 int main()
{
	printf("%s\n", ft_strtrim("abqbc", "abc"));
	printf("%s\n", ft_strtrim("xavocadoyz", "oca"));
	return 0;
}
*/

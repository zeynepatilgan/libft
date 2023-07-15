/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeatilga <zeatilga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:48:28 by zeatilga          #+#    #+#             */
/*   Updated: 2023/07/11 00:58:08 by zeatilga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void	zeynep(unsigned int i, char * d)
{
	int	a;

	a = 0;
	i = 0;
	if (*d)
	{
		d[a] = d[a] - 32;
	}
}

int	main()
{
	char test[] = "zeynep";
	ft_striteri(test,zeynep);
	printf("%s",test);
}
*/

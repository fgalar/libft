/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:17:11 by fgarault          #+#    #+#             */
/*   Updated: 2019/04/20 18:11:08 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	cc;
	char			*dest;
	char			*srce;
	size_t			i;

	cc = (unsigned char)c;
	dest = (char*)dst;
	srce = (char*)src;
	i = 0;
	while (n)
	{
		dest[i] = srce[i];
		if (dest[i] == cc)
			return (dest + i + 1);
		i++;
		n--;
	}
	return (NULL);
}

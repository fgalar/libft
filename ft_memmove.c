/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 19:47:39 by fgarault          #+#    #+#             */
/*   Updated: 2019/04/20 18:50:19 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*tmp_zone;

	if (!(tmp_zone = (void*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_memcpy(tmp_zone, src, len);
	ft_memcpy(dst, tmp_zone, len);
	free(tmp_zone);
	return (dst);
}

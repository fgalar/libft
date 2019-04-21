/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 11:42:04 by fgarault          #+#    #+#             */
/*   Updated: 2019/04/20 19:49:33 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	char	*str;

	start = 0;
	end = ft_strlen(s);
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	while (s[end - 1] == ' ' || s[end - 1] == '\n' || s[end - 1] == '\t')
		end--;
	if (!(str = ft_strsub(s, start, ((end - start) + 1))))
		return (NULL);
	str[(end - start) + 1] = '\0';
	return (str);
}

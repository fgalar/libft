/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <fgarault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 18:55:27 by fgarault          #+#    #+#             */
/*   Updated: 2020/12/21 20:11:11 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**   No leak version of get_next_line(); Static is replaced by extern pointer
*/

static char	*ft_strjoinfree(char *s1, char *s2, int option)
{
	char	*s;

	s = ft_strjoin(s1, s2);
	if (option == 1)
		ft_strdel(&s1);
	else if (option == 2)
		ft_strdel(&s2);
	else if (option == 3)
	{
		ft_strdel(&s1);
		ft_strdel(&s2);
	}
	return (s);
}

static char	*reader(const int fd, char *ptr)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];

	if (fd < 0 || BUFF_SIZE < 1)
		return (NULL);
	if (!ptr)
		ptr = ft_strnew(1);
	while (!ft_strchr(ptr, '\n'))
	{
		if ((ret = read(fd, buf, BUFF_SIZE)) < 0)
			return (NULL);
		buf[ret] = '\0';
		ptr = ft_strjoinfree(ptr, buf, 1);
		if (!ret)
			break ;
	}
	return (ptr);
}

int			gnl(const int fd, char **line, char **ptr)
{
	char	*bk_n;

	bk_n = 0;
	if (!(*ptr = reader(fd, *ptr)) || !line)
		return (-1);
	if ((bk_n = ft_strchr(*ptr, '\n')) != 0)
	{
		*line = ft_strndup(*ptr, (bk_n - (*ptr)));
		ft_strdel(ptr);
		*ptr = ft_strdup(bk_n + 1);
		return (1);
	}
	*line = ft_strdup(*ptr);
	ft_strdel(ptr);
	return (*line[0] ? 1 : 0);
}

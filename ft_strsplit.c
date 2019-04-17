/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 13:46:23 by fgarault          #+#    #+#             */
/*   Updated: 2019/04/17 18:28:22 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

#include <stdio.h>
int		ft_strcount(const char *s, char c)
{
	unsigned int	count;
	unsigned int	i;
	
	count = 0;
	i = 1;
	while (s[i])
	{	
		if (s[i] == c && s[i - 1] != c )
			count++;
		i++;
	}
	if (s[i] == '\0' && s[i - 1] != c)
		count++;
	return (count);
}
unsigned int	ft_strclen(const char *s, char c)
{
	unsigned int		upper;
	unsigned int		lower;

	upper = 0;
	lower = 0;
	while (s[upper] == c)
		upper++;
	lower = upper;
	while (s[upper] != c)
		upper++;
	return (upper - lower);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		y;
	int		nb_str;
	int		splitator;

	y = 0;
	nb_str = ft_strcount(s, c);
	splitator = 0;
	if ((tab = (char**)malloc(sizeof(char*) * nb_str)) == NULL)
		return (NULL);
	while (y <= nb_str && s[splitator])
	{
		while (s[splitator] == c && s[splitator - 1] != c && s[splitator])
			splitator++;
		tab[y] = ft_strsub(s, splitator, ft_strclen(s, c));
		splitator = splitator + ft_strlen(tab[y]) + 1;
		y++;
	}
	return (tab);
}


#include <unistd.h>
	void	ft_print_result(char const *s)
	{
		int		len;
		len = 0;
		while (s[len])
			len++;
		write(1, s, len);
	}

int main ()
{
	int		i;

	i = 0;
	char **tabstr = ft_strsplit("**Salut **les **moches**", '*');
	while (tabstr[i] != '\0')
	{
		ft_print_result(tabstr[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

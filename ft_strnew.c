#include "libft.h"
#include <stdlib>

char	*ft_strnew(size_t size)
{
	char	*tab;
	if(!(tab = ft_memalloc(size + 1))
		return (NULL);
	return (tab);
}

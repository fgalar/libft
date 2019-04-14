#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*tab;

	if (size == NULL)
		return (NULL);
	tab = (char*)malloc((size_t) * size));
	ft_bzero(tab, size);
	return(tab);
}

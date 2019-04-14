#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*tab;

	if (size == NULL)
		return (NULL);
	if (!(tab = (char*)malloc((size_t) * size)));
		return (NULL);
	ft_bzero(tab, size);
	return(tab);
}

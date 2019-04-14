#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	while (s)
	{
		f(&s[i]);
		i++;
	}
	return (s);
}

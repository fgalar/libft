#include <limits.h>
#include <stdio.h>
#include "libft.h"

int	main()
{
	char *str = ft_itoa(LONG_MAX);
	char *s = ft_itoa(LONG_MIN);
	ft_printf("%s\n", str);
	printf("%s\n", str);
	ft_printf("%s\n", s);
	printf("%s\n", s);
	//free(s);
	//free(str);
	return 0;
}

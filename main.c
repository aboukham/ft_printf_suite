#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("%*.*d\n",7, 5, -750);
	printf("%*.*d",7, 5,-750);
	return (0);
}

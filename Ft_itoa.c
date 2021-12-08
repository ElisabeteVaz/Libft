#include "libft.h"

char	*ft_itoa(int n)
{
	int		size;
	int		negative;
	int		tmp;
	char	*array;

	negative = 0;
	if (n < 0)
		negative = 1;
	tmp = n;
	size = 1;
	while ((tmp /= 10))
		size++;
	array = ft_strnew(size + negative);
	if (array == NULL)
		return (NULL);
	if (negative)
		array[0] = '-';
	while (size--)
	{
		array[size + negative] = (negative ? -(n % 10) : (n % 10)) + '0';
		n /= 10;
	}
	return (array);
}

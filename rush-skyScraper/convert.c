#include <stdlib.h>

int len_str(char *str);

int	*convert_str_to_array(char *str)
{
	int	i;
	int	*tab;

	tab = malloc(sizeof(int) * len_str(str) / 2);

	if (tab == NULL)
		return NULL;

	i = 0;
	while (str[i + 1] != '\0')
	{
		tab[i / 2] = str[i] - '0';
		i += 2;
	}

	return tab;
}


#include <stdio.h>
#include <stdlib.h>

int len_str(char *str);
int	*convert_str_to_array(char *str);

int	main (int argc, char **argv)
{
	if (argc == 0)
		return (1);
	int *t = convert_str_to_array(argv[1]);

	return 0;
}

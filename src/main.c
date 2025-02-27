#include "push_swap.h"

int main(int argc, char **argv)
{
	int arr_l;

	if (argc == 1)
		return (0);
	//
	ft_printf("Arguments: %d\n", argc - 1);
	int num = 1;
	while(num < argc)
	{
		ft_printf("Argument %d: %s\n", num, argv[num]);
		num++;
	}
	//
	parse_input(argc, argv, &arr_l);
	ft_printf("end\n"); // DEBUGG BORRA
}
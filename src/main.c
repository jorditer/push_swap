#include "push_swap.h"

int main(int argc, char **argv)
{
	int arr_l;
	int	*arr;
	int *arr2;

	if (argc == 1)
		return (0);
	//
	ft_printf("Arguments: %d\n", argc - 1);
	for (int num = 1; num < argc; num++)
		ft_printf("Argument %d: %s\n", num, argv[num]);
	//
	arr = parse_input(argc, argv, &arr_l);
	arr2 = malloc(sizeof(int) * arr_l);
	if (!arr2)
		exit (1);
	algo_prep(arr, arr2, arr_l);
	for(int i = 0; i < arr_l; i++)// DEBUG DELETE
		ft_printf("Array renumbered [%d]: %d\n", i, arr[i]);// DEBUG DELETE
	check_duplicates(arr, arr2, arr_l);
	free(arr);
	free(arr2);
	ft_printf("end\n"); // DEBUGG BORRA
}
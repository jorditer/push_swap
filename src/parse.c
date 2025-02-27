/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:22:43 by jterrada          #+#    #+#             */
/*   Updated: 2025/02/27 18:54:5 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_numbers(int len, char **str)
{
	int	i;
	int	j;
	int count;

	i = 1;
	count = 0;
	while (i < len)
	{
		j = 0;
		while (str[i][j])
		{
			write(1, &str[i][j], 1);
			ft_printf(": number\n");
			is_valid(str[i][j]);
			if (str[i][j] && is_whitespace(str[i][j]))
			{
				while (str[i][j] && is_whitespace(str[i][j]))
					j++;
			}
			if (str[i][j] && (is_num(str[i][j]) || is_sign(str[i][j])))
			{
				if (str[i][j] && is_sign(str[i][j]))
				{
					j++;
					if (!str[i][j] || !is_num(str[i][j]))
						ft_error();
				}
				count++;
				j++;
				while (str[i][j] && is_num(str[i][j]))
					j++;
			}
		}
		i++;
	}
	return (count);
}

int	*parse_input(int len, char **str)
{
	int	count;
	int *arr;

	count = count_numbers(len, str);
	ft_printf("Count = %d\n", count);
	arr = malloc(sizeof(int) * count);
	return (arr);
}

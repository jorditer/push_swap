/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:24:17 by jterrada          #+#    #+#             */
/*   Updated: 2025/02/27 19:02:20 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_whitespace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	is_num(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_sign(char c)
{
	return (c == '+' || c == '-');
}

void	ft_error(void)
{
	ft_printf("Error\n");
	exit(1);
}

void	is_valid(char c)
{
	if (!(is_whitespace(c) || is_num(c) || is_sign(c)))
	{
		ft_printf("%d\n", c);	// DEBUGGING DELETE
		ft_error();
	}
}

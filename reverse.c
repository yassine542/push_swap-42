/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:19:06 by yajallal          #+#    #+#             */
/*   Updated: 2023/01/24 11:16:42 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *s_a)
{
	int	i;
	int	tmp;

	i = s_a->len - 1;
	tmp = s_a->arr[i];
	while (i > 0)
	{
		s_a->arr[i] = s_a->arr[i - 1];
		i--;
	}
	s_a->arr[i] = tmp;
}

void	rrb(t_stack *s_b)
{
	int	i;
	int	tmp;

	i = s_b->len - 1;
	tmp = s_b->arr[i];
	while (i > 0)
	{
		s_b->arr[i] = s_b->arr[i - 1];
		i--;
	}
	s_b->arr[i] = tmp;
}

void	rrr(t_stack *s_a, t_stack *s_b)
{
	rra(s_a);
	rrb(s_b);
	ft_putstr_fd("rrr\n", 1);
}

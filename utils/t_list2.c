/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_list2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmolzer <pmolzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:10:22 by pmolzer           #+#    #+#             */
/*   Updated: 2024/04/30 17:14:59 by pmolzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Returns the size of the Linked List
int	ft_lstsize(t_list *head)
{
	size_t	i;
	t_list	*tmp;

	tmp = head;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

// Prints the Linked List
void	print_list(t_list *head)
{
	t_list	*tmp;

	tmp = head;
	while (tmp != NULL)
	{
		ft_putnbr_fd(tmp->value, 1);
		ft_putendl_fd("", 1);
		tmp = tmp->next;
	}
}

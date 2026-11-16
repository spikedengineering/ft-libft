/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 09:23:36 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/16 12:23:23 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../visualizer/visualizer.h"
#include <unistd.h>

void	ft_visualizenode(t_list *lst, int is_first)
{
	char	*hex_str;

	hex_str = NULL;
	ft_nodeconstruct0(lst, is_first, hex_str);
	ft_nodeconstruct1(lst, hex_str);
	ft_nodeconstruct2(lst, hex_str);
	ft_nodeconstruct3(lst);
	ft_nodeconstruct4(lst);
}

void	ft_visualizelst(t_list *lst)
{
	t_list	*current;
	int		is_first;

	is_first = 1;
	current = lst;
	while (current)
	{
		ft_visualizenode(current, is_first);
		if (is_first)
			is_first = 0;
		current = current->next;
	}
}

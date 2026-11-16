/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 21:43:49 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/16 12:44:49 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next)
		current = current->next;
	current->next = new;
}

//#include "visualizer/visualizer.h"
//int	main(void)
//{
//	t_list	*lst;
//	void	*plst;
//	t_list	*new;
//
//	lst = ft_lstnew("hello");
//	ft_visualizelst(lst);
//	plst = &lst;
//	new = ft_lstnew("world");
//	ft_lstadd_back(plst, new);
//	ft_visualizelst(lst);
//}

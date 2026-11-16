/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 20:05:56 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/16 12:43:59 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
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
//	ft_lstadd_front(plst, new);
//	ft_visualizelst(lst);
//}

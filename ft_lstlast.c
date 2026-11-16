/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 21:28:06 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/16 12:42:10 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (!lst)
		return (lst);
	current = lst;
	while (current->next)
		current = current->next;
	return (current);
}

//#include "visualizer/visualizer.h"
//#include <stdio.h>
//int	main(void)
//{
//	t_list	*lst;
//
//	lst = ft_lstnew("hello");
//	lst->next = ft_lstnew("world");
//	printf("FULL LIST:\n");
//	ft_visualizelst(lst);
//	printf("LAST NODE:\n");
//	ft_visualizelst(ft_lstlast(lst));
//}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 21:08:54 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/16 12:41:05 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;
	t_list			*current;

	if (!lst)
		return (0);
	count = 1;
	current = lst;
	while (current->next)
	{
		count++;
		current = current->next;
	}
	return (count);
}

//#include "visualizer/visualizer.h"
//#include <stdio.h>
//int	main(void)
//{
//	t_list	*lst;
//
//	lst = ft_lstnew("hello");
//	lst->next = ft_lstnew("world");
//	ft_visualizelst(lst);
//	printf("Linked list size: %d\n", ft_lstsize(lst));
//}

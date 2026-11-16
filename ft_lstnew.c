/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 19:54:06 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/16 14:49:21 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = ft_calloc(1, sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

//#include "visualizer/visualizer.h"
//int	main(void)
//{
//	t_list	*lst;
//
//	lst = ft_lstnew("hello");
//	lst->next = ft_lstnew("world");
//	lst->next->next = ft_lstnew(NULL);
//	ft_visualizelst(lst);
//}

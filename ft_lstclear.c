/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 11:39:10 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/16 13:46:49 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del || !*lst)
		return ;
	current = *lst;
	while (current)
	{
		del(current->content);
		next = current->next;
		free(current);
		current = next;
	}
	*lst = NULL;
}

//#include "visualizer/visualizer.h"
//#include <stdio.h>
//static void	ft_del(void *content)
//{
//	free(content);
//}
//int	main(void)
//{
//	t_list	*lst;
//	void	*plst;
//	char	*str0;
//	char	*str1;
//	char	*str2;
//
//	str0 = ft_strdup("hello");
//	lst = ft_lstnew(str0);
//	str1 = ft_strdup("world");
//	lst->next = ft_lstnew(str1);
//	str2 = ft_strdup("my name is");
//	lst->next->next = ft_lstnew(str2);
//	ft_visualizelst(lst);
//	plst = &lst;
//	ft_lstclear(plst, ft_del);
//	ft_visualizelst(lst);
//}

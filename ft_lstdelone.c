/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 11:31:50 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/16 13:47:10 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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
//	ft_lstdelone(lst, ft_del);
//	ft_visualizelst(lst);
//}

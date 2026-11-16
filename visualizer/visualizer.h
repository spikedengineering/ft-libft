/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visualizer.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajose-al <ajose-al@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 11:49:23 by ajose-al          #+#    #+#             */
/*   Updated: 2026/11/16 12:24:11 by ajose-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
char	*ft_dectohexstr(int decimal);
void	ft_putstrncenter(char *str);

void	ft_nodeconstruct0(t_list *lst, int is_first, char *hex_str);
void	ft_nodeconstruct1(t_list *lst, char *hex_str);
void	ft_nodeconstruct2(t_list *lst, char *hex_str);
void	ft_nodeconstruct3(t_list *lst);
void	ft_nodeconstruct4(t_list *lst);

void	ft_visualizenode(t_list *lst, int is_first);
void	ft_visualizelst(t_list *lst);

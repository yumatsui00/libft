/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:17:42 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/17 19:23:16 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *con)
{
	t_list	*ans;

	ans = (t_list *)malloc(sizeof(t_list));
	if (!ans)
		return (NULL);
	ans -> next = NULL;
	ans -> content = con;
	return (ans);
}

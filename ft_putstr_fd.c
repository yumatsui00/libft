/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:51:33 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/18 22:19:15 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	char	*cpy;

	if (s == NULL)
		return ;
	cpy = s;
	while (*cpy)
	{
		write(fd, cpy, 1);
		cpy++;
	}
}

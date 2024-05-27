/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:36:07 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/17 15:04:44 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*i;

	if (count != 0 && size != 0 && (SIZE_MAX / count) < size)
		return (NULL);
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	i = (void *)malloc(size * count);
	if (i == NULL)
		return (NULL);
	ft_memset(i, 0, (size * count));
	return (i);
}

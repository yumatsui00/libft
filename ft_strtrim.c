/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:38:31 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/19 18:31:26 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charchecker(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_charchecker(s1[start], set))
		start++;
	if (start == end)
		return (ft_strdup(""));
	while (ft_charchecker (s1[end - 1], set))
		end--;
	return (ft_substr(s1, start, end - start));
}

// int main()
// {
// 	printf("ans = %s\n", ft_strtrim("", ""));
// }
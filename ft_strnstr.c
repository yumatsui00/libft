/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:07:52 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/18 20:15:49 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	neesize;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	i = 0;
	neesize = ft_strlen(needle);
	while (i < len && *haystack)
	{
		if (*haystack == needle[0])
		{
			j = 0;
			while ((haystack[j] == needle[j]) && (i + j < len))
			{
				if (j == neesize - 1)
					return ((char *)haystack);
				j++;
			}
		}
		i++;
		haystack++;
	}
	return (NULL);
}

// int main(){
// 	const char *str = "libft-test-tokyo";
// 	const char *needle = "tokyo";
// 	printf("strnstr    = %s\n", strnstr(str, needle, 16));
// 	printf("ft_strnstr = %s\n", ft_strnstr(str, needle, 16));
// }
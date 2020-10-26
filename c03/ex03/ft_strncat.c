/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souassin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 17:58:25 by souassin          #+#    #+#             */
/*   Updated: 2020/10/26 16:27:33 by souassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int v;

	v = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[v] && v < nb)
	{
		dest[i] = src[v];
		i++;
		v++;
	}
	dest[i] = '\0';
	return (dest);
}

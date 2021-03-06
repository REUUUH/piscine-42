/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souassin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 10:39:04 by souassin          #+#    #+#             */
/*   Updated: 2020/10/22 10:39:16 by souassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 97 && str[i] <= 122)
		str[i] -= 32;
	i++;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		i++;
		if ((str[i - 1] < 48 || str[i - 1] > 57) && (str[i - 1] < 65 || str
			[i - 1] > 90) && (str[i - 1] < 97 || str[i - 1] > 122)
			&& (str[i] >= 97 && str[i] <= 122))
			str[i] -= 32;
	}
	return (str);
}

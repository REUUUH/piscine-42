/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souassin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 14:47:36 by souassin          #+#    #+#             */
/*   Updated: 2020/10/26 11:48:30 by souassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_whitespace(char *str)
{
	int i;

	i = 0;
	while (str[i] == '\t'
			|| str[i] == '\r'
			|| str[i] == '\v'
			|| str[i] == '\b'
			|| str[i] == '\n'
			|| str[i] == '\f'
			|| str[i] == ' ')
		i++;
	return (i);
}

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int	res;

	sign = 1;
	i = ft_whitespace(str);
	res = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= 0 && str[i] <= 9)
	{
		res = res * 10 + (str[i] - '0');
	}
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaricou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:08:06 by amaricou          #+#    #+#             */
/*   Updated: 2022/07/18 13:43:38 by amaricou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			if (!(str[i -1] >= 'a' && str[i -1] <= 'z')
				&& !(str[i -1] >= 'A' && str[i -1] <= 'Z')
				&& !(str[i -1] >= '0' && str[i -1] <= '9'))
					str[i] -= 32;
		}
		i++;
	}
	return (str);
}

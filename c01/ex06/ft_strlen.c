/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youennaj <youennaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:42:41 by youennaj          #+#    #+#             */
/*   Updated: 2024/06/29 20:36:43 by youennaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	nbc;

	nbc = 0;
	while (str[nbc])
		nbc++;
	return (nbc);
}

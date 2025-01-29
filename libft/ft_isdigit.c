/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-29 12:32:07 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-29 12:32:07 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int a)
{
	if (!(a <= '9' && a >= '0'))
		return (0);
	return (1);
}
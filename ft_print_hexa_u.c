/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_u.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <eassamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:09:04 by eassamer          #+#    #+#             */
/*   Updated: 2021/11/16 18:11:50 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void    ft_print_hexa_u(int hexa)
{
    char *base="0123456789ABCDEF";
   
   if (hexa < 0)
   {
       hexa *= -1;
       ft_putchar('-');
   }
   
   if(hexa <= 15)
   {
       ft_putchar(base[hexa]);
   }
   
   if (hexa > 15)
   {
       ft_print_hexa_u(hexa/16);
       ft_print_hexa_u(hexa%16);
   }
}
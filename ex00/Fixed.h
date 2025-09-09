/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaillez <nsaillez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:05:35 by nsaillez          #+#    #+#             */
/*   Updated: 2025/09/09 09:41:54 by nsaillez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
    private:
        int fixed_point;
        static const int fractional_bits = 8;
    public:
        Fixed();
        Fixed(Fixed &obj);
        Fixed& operator= (Fixed& obj)
        {
            std::cout << "Copy assignment operator called" << std::endl;
            this->setRawBits(obj.getRawBits());
            
            return (*this);
        };
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif
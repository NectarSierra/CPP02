/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaillez <nsaillez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:06:18 by nsaillez          #+#    #+#             */
/*   Updated: 2025/09/08 15:27:15 by nsaillez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed(){
	std::cout << "Constructor Called!" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed(Fixed &obj){
	std::cout << "Copy constructor Called!" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor Called!" << std::endl;
}
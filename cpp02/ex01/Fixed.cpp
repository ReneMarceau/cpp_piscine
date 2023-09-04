/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:23:07 by rene              #+#    #+#             */
/*   Updated: 2023/08/25 20:54:43 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>

Fixed::Fixed(void)
: _fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(int const value) {
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = value << this->_fractionalBits;
    return ;
}

Fixed::Fixed(float const value) {
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = int(roundf(value * (1 << this->_fractionalBits)));
    return ;
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    this->_fixedPointValue = other.getRawBits();
    return ;
}

Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignation operator called" << std::endl;
    this->_fixedPointValue = other.getRawBits();
    return *this;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
    return ;
}

int Fixed::getRawBits(void) const {
    return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
    this->_fixedPointValue = raw;
    return ;
}

int Fixed::toInt(void) const {
    return this->_fixedPointValue >> this->_fractionalBits;
}

float Fixed::toFloat(void) const {
    return (float)this->_fixedPointValue / (float)(1 << this->_fractionalBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
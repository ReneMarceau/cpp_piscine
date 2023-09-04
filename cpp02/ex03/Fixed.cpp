/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 22:03:19 by rene              #+#    #+#             */
/*   Updated: 2023/08/25 22:54:49 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

// Constructors
Fixed::Fixed(void)
    : _fixedPointValue(0) {
    return ;
}

Fixed::Fixed(int const value)
    : _fixedPointValue(value << _fractionalBits) {
    return ;
}

Fixed::Fixed(float const value)
    : _fixedPointValue(int(roundf(value * (1 << _fractionalBits)))) {
    return ;
}

Fixed::Fixed(const Fixed &other) 
    : _fixedPointValue(other.getRawBits()) {
    return ;
}

// Destructor
Fixed::~Fixed(void) {
    return ;
}

// Assignment operator
Fixed &Fixed::operator=(const Fixed &other) {
    this->_fixedPointValue = other.getRawBits();
    return *this;
}

// Comparison operators
bool Fixed::operator>(const Fixed &other) const {
    return this->_fixedPointValue > other.getRawBits();
}

bool Fixed::operator<(const Fixed &other) const {
    return this->_fixedPointValue < other.getRawBits();
}

bool Fixed::operator>=(const Fixed &other) const {
    return this->_fixedPointValue >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed &other) const {
    return this->_fixedPointValue <= other.getRawBits();
}

bool Fixed::operator==(const Fixed &other) const {
    return this->_fixedPointValue == other.getRawBits();
}

bool Fixed::operator!=(const Fixed &other) const {
    return this->_fixedPointValue != other.getRawBits();
}

// Arithmetic operators
Fixed Fixed::operator+(const Fixed &other) const {
    Fixed result;

    result.setRawBits(this->_fixedPointValue + other.getRawBits());
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const {
    Fixed result;

    result.setRawBits(this->_fixedPointValue - other.getRawBits());
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const {
    Fixed result;

    result.setRawBits((this->_fixedPointValue * other.getRawBits()) >> _fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const {
    Fixed result;

    result.setRawBits((this->_fixedPointValue << _fractionalBits) / other.getRawBits());
    return result;
}

// Increment and decrement operators
Fixed& Fixed::operator++(void) {
    this->_fixedPointValue++;
    return *this;
}

Fixed& Fixed::operator--(void) {
    this->_fixedPointValue--;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed result(*this);

    this->_fixedPointValue++;
    return result;
}

Fixed Fixed::operator--(int) {
    Fixed result(*this);

    this->_fixedPointValue--;
    return result;
}

// Getter & Setter
int Fixed::getRawBits(void) const {
    return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
    this->_fixedPointValue = raw;
    return ;
}

// Converters
int Fixed::toInt(void) const {
    return this->_fixedPointValue >> _fractionalBits;
}

float Fixed::toFloat(void) const {
    return (float)this->_fixedPointValue / (float)(1 << _fractionalBits);
}

// Min and max functions
Fixed& Fixed::min(Fixed &a, Fixed &b) {
    return a < b ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
    return a > b ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    return a.getRawBits() < b.getRawBits() ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    return a.getRawBits() > b.getRawBits() ? a : b;
}

// Output stream operator overload
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
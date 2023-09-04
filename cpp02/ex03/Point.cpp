/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 22:03:51 by rene              #+#    #+#             */
/*   Updated: 2023/08/25 22:33:40 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
    : _x(Fixed(0)), _y(Fixed(0)) {
    return ;
}

Point::Point(float const x, float const y)
    : _x(Fixed(x)), _y(Fixed(y)) {
    return ;
}

Point::Point(const Point &other)
    : _x(other.getX()), _y(other.getY()) {
    return ;
}

Point& Point::operator=(const Point &other) {
    (void)other;
    std::cout << "Assignment of const variable impossible" << std::endl;
    return *this;
}

Point::~Point(void) {
    return ;
}

Fixed const Point::getX(void) const {
    return this->_x;
}

Fixed const Point::getY(void) const {
    return this->_y;
}
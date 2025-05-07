/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:06:12 by pau               #+#    #+#             */
/*   Updated: 2025/05/02 21:33:11 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(const int value) : _value(roundf(value * (1 << _fracint))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _value(roundf(value * (1 << _fracint))) {
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(_value) / (1 << _fracint);}

int Fixed::toInt(void) const {
    return _value >> _fracint;
}

std::ostream& operator<<(std::ostream& os, const Fixed &obj) {
    os << obj.toFloat();
    return os;
}
Fixed& Fixed::operator=(const Fixed& rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw) {
    this->_value = raw;
}

bool Fixed::operator>(const Fixed &op) const
{
	return (this->toFloat() > op.toFloat());
}

bool Fixed::operator<(const Fixed &op) const
{
	return (this->toFloat() < op.toFloat());
}

bool Fixed::operator>=(const Fixed &op) const
{
	return (this->toFloat() >= op.toFloat());
}

bool Fixed::operator<=(const Fixed &op) const
{
	return (this->toFloat() <= op.toFloat());
}

bool Fixed::operator==(const Fixed &op) const
{
	return (this->toFloat() == op.toFloat());
}

bool Fixed::operator!=(const Fixed &op) const
{
	return (this->toFloat() != op.toFloat());
}

Fixed Fixed::operator+(const Fixed& rhs) const{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed& rhs) const{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed& rhs) const{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed& rhs) const{
    return Fixed(this->toFloat() / rhs.toFloat());
}

//1/(2^8) = 1/256 = 0.00390625.

Fixed &Fixed::operator++(){
    this->_value++;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed old = *this;
    this->_value++;
    return old;
}

Fixed &Fixed::operator--(){
    this->_value--;
    return *this;
}

Fixed Fixed::operator--(int){
    Fixed old = *this;
    this->_value--;
    return old;
}

Fixed& Fixed::min(Fixed& a, Fixed& b){
    return (a < b ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
    return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b){
    return (a > b ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b){
    return (a > b ? a : b);
}

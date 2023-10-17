#include "Complex.h"
#include <iostream>
#include <math.h>

Complex::Complex(double real_part_val, double img_part_val)
    :real_part(real_part_val), img_part(img_part_val){
}

Complex::~Complex(){
}

double Complex::get_real() const
{
    return real_part;
}

double Complex::get_img() const
{
    return img_part;
}

double Complex::calc_amp() const
{
    return abs(sqrt((real_part * real_part) + (img_part * img_part)));
}

double Complex::calc_phase() const
{
    return atan(real_part/img_part);
}

std::ostream &operator<<(std::ostream &os, const Complex &rhs)
{
    os << "Real part: " << rhs.real_part << " Imaginary part: " << rhs.img_part;
    return os;
}

bool Complex::operator==(const Complex &rhs) const
{
    return (real_part == rhs.real_part && img_part == rhs.img_part);
}

bool Complex::operator!=(const Complex &rhs) const
{
    return !(real_part == rhs.real_part && img_part == rhs.img_part);
}

Complex operator+(const Complex &lhs, const Complex &rhs)
{
    return Complex(lhs.real_part + rhs.real_part, lhs.img_part + rhs.img_part); 
}

Complex operator-(const Complex &lhs, const Complex &rhs)
{
    return Complex(lhs.real_part - rhs.real_part, lhs.img_part - rhs.img_part);
}

Complex operator*(const Complex &lhs, const Complex &rhs)
{
    return Complex((lhs.real_part * rhs.real_part) - (lhs.img_part * rhs.img_part),
        (lhs.real_part * rhs.img_part) + (lhs.img_part * rhs.real_part));
}

Complex operator/(const Complex &lhs, const Complex &rhs)
{
    double denominator = rhs.real_part * rhs.real_part + rhs.img_part * rhs.img_part;
    double real = (lhs.real_part * rhs.real_part + lhs.img_part * rhs.img_part)/ denominator;
    double imag = (lhs.img_part * rhs.real_part - lhs.real_part * rhs.img_part)/ denominator;
    return Complex(real, imag);
}

Complex &Complex::operator+=(const Complex &rhs)
{
    *this = *this + rhs;
    return *this;
}

Complex &Complex::operator-=(const Complex &rhs)
{
    *this = *this - rhs;
    return *this;
}

Complex &Complex::operator*=(const Complex &rhs)
{
    *this = *this * rhs;
    return *this;
}

Complex &Complex::operator/=(const Complex &rhs)
{
    *this = *this / rhs;
    return *this;
}

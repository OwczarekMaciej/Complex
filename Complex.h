#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

#pragma once

class Complex
{
    friend std::ostream &operator<<(std::ostream &os, const Complex &rhs);
    friend Complex operator+(const Complex &lhs, const Complex &rhs);
    friend Complex operator-(const Complex &lhs, const Complex &rhs);
    friend Complex operator*(const Complex &lhs, const Complex &rhs);
    friend Complex operator/(const Complex &lhs, const Complex &rhs);

    friend bool operator==(const Complex &lhs, const Complex &rhs);
    friend bool operator!=(const Complex &lhs, const Complex &rhs);

public:
    Complex(double real_part_val = 0, double img_part_val = 0);
    
    Complex &operator+=(const Complex &rhs);
    Complex &operator-=(const Complex &rhs);
    Complex &operator*=(const Complex &rhs);
    Complex &operator/=(const Complex &rhs);

    double get_real() const;
    double get_img() const;
    double calc_amp() const;
    double calc_phase() const;

private:
    double real_part;
    double img_part;
};

#endif

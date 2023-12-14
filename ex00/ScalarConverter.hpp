#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cmath>

class ScalarConverter
{
private:
    int _i;
    char _c;
    double _d;
    float _f;
public:
    ScalarConverter();
    ScalarConverter(std::string &av1);
    ScalarConverter(const ScalarConverter &other);
    ScalarConverter &operator=(const ScalarConverter &other);
    static void convert(std::string &literal);
    void print_info(float av1);
    ~ScalarConverter();
};

#endif
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

void ScalarConverter::print_info(float av1)
{
    //char;
    if(isprint(av1))
        std::cout << "char: " << _c << std::endl;
    else if (isnan(av1))
        std::cout << "char: impossible\n";
    else
        std::cout << "char: Non displayable" << std::endl;
    // int;
    if (isnan(av1))
        std::cout << "int: impossible\n";
    else
        std::cout << "int: " << _i << std::endl;
    //float;
    if (av1 != static_cast<int>(av1))
        std::cout << "float: " << _f << "f" << std::endl;
    else
        std::cout << "float: " << _f << ".0f" << std::endl;
    //double;
    if (av1 != static_cast<int>(av1))
        std::cout << "double: " << _d << std::endl;
    else
        std::cout << "double: " << _d << ".0" << std::endl;
}

ScalarConverter::ScalarConverter(std::string &av1)
{
    _i = static_cast<int>(atoi(av1.c_str()));
    _c = static_cast<char>(atoi(av1.c_str()));
    _f = static_cast<float>(atof(av1.c_str()));
    _d = static_cast<double>(atof(av1.c_str()));
    print_info(atof(av1.c_str()));
}

void ScalarConverter::convert(std::string &av1)
{
    (void)av1;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    *this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    if (this != &other)
    {
        _i = other._i;
        _d = other._d;
        _f = other._f;
        _c = other._c;
    }
    return *this;
}

ScalarConverter::~ScalarConverter()
{
}
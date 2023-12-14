#include "ScalarConverter.hpp"

int ScalarConverter::_i = 0;
char ScalarConverter::_c = 0;
float ScalarConverter::_f = 0;
double ScalarConverter::_d = 0;

ScalarConverter::ScalarConverter()
{
    _i = 0;
    _c = 0;
    _f = 0.0f;
    _d = 0.0;
}

void ScalarConverter::print_charType()
{
    std::cout << "char: " << _c << std::endl;
    std::cout << "int: " << _i << std::endl;
    std::cout << "float: " << _f << ".0f" << std::endl;
    std::cout << "double: " << _d << ".0" << std::endl;
}

void ScalarConverter::print_info(float av1)
{
    //char;
    if(isprint(av1))
        std::cout << "char: " << _c << std::endl;
    else if (isnan(av1))
        std::cout << "char: impossible\n";
    else if(!isprint(av1))
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

void ScalarConverter::convert(std::string &av1)
{
    if (isalpha(av1[0]) && av1.length() == 1)
    {
        _c = av1[0];
        print_charType();
        return ;
    }
    const char *s = av1.c_str();
    _i = static_cast<int>(atoi(s));
    if (atoi(s))
        _c = static_cast<char>(atoi(s));
    _f = static_cast<float>(atof(s));
    _d = static_cast<double>(atof(s));
    print_info(atof(s));
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
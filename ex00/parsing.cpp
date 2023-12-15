#include "ScalarConverter.hpp"

int is_character(std::string& literal)
{
    int alpha = 0;
    for (int i = 0; literal[i]; i++)
    {
        if (alpha > 1)
            return 0;
        if (isalpha(literal[i]))
            alpha++;
    }
    if (alpha == 1)
        return 1;
    return 0;
}

int is_valid(std::string &literal)
{
    int dots = 0;
    for(int i = 0; literal[i]; i++)
    {
        if (isalpha(literal[i])&& !is_character(literal))
        {
            std::cout << "here2\n";
            return 0;
        }
        if (literal[i] == '.')
        {
            dots++;
            if (dots > 1 || i == 0 || static_cast<size_t>(i) == literal.length() - 1)
                return 0;
        }
    }
    return 1;
}

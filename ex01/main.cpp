#include "Serializer.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
        return 0;
    int a = 43;
    char c = reinterpret_cast<int>(a);
    std::cout << c << std::endl;
}